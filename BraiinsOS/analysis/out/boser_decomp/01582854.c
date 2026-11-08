// FUN_01582854 @ 01582854 size=284 calls_out=4 calls_in=0
// strings: 

undefined8
FUN_01582854(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 == '\x04') {
    iVar3 = *(int *)(param_2 + 8);
    iVar5 = *(int *)(param_1 + 4);
    uVar4 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0xc)) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    local_3c = 0;
    local_40 = 4;
    local_44 = 0;
    if (uVar4 != 0) {
      uVar6 = 0;
      do {
        local_38 = -0x7fffffff;
        local_34 = uVar6;
        local_2c = param_3;
        uVar7 = FUN_01576990(iVar5,iVar3,&local_38,param_4,param_5);
        FUN_014fb9d0(&local_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x14;
        iVar3 = iVar3 + 0x18;
      } while (uVar4 != uVar6);
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

