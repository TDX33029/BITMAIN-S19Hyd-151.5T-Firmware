// FUN_01583148 @ 01583148 size=276 calls_out=4 calls_in=0
// strings: 

undefined8
FUN_01583148(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 == '\x04') {
    iVar5 = *(int *)(param_2 + 8);
    local_3c = 0;
    local_44 = 0;
    local_40 = 4;
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar3 = *(int *)(param_2 + 0xc) * 0x18;
      iVar4 = 0;
      do {
        local_38 = -0x7fffffff;
        local_34 = iVar4;
        local_2c = param_3;
        uVar6 = FUN_01576990(param_1,iVar5,&local_38,param_4,param_5);
        FUN_014fb9d0(&local_44,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
        iVar5 = iVar5 + 0x18;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -0x18;
      } while (iVar3 != 0);
    }
    local_2c = local_40 + local_3c * 4;
    local_38 = local_40;
    local_34 = local_40;
    local_30 = local_44;
    piVar1 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar2 = &UNK_01cfc168;
    *piVar1 = local_38;
    piVar1[1] = local_34;
    piVar1[2] = local_30;
    piVar1[3] = local_2c;
  }
  else {
    piVar1 = (int *)&DAT_00000001;
    puVar2 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar2,piVar1);
}

