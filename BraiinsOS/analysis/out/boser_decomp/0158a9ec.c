// FUN_0158a9ec @ 0158a9ec size=320 calls_out=4 calls_in=1
// strings: 

undefined8
FUN_0158a9ec(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 == '\x04') {
    iVar4 = *(int *)(param_2 + 8);
    local_40 = 4;
    uVar1 = *(uint *)(param_1 + 0x14);
    iVar5 = 0;
    local_3c = 0;
    iVar6 = iVar4 + *(int *)(param_2 + 0xc) * 0x18;
    local_44 = 0;
    do {
      if (uVar1 == 0) {
        if (iVar4 == iVar6) goto LAB_0158aadc;
      }
      else {
        if (((uint)(iVar6 - iVar4) >> 3) * -0x55555555 <= uVar1) goto LAB_0158aadc;
        iVar5 = uVar1 + iVar5;
        iVar4 = iVar4 + uVar1 * 0x18;
      }
      local_38 = -0x7fffffff;
      local_34 = iVar5;
      local_2c = param_3;
      uVar7 = FUN_01576990(param_1,iVar4,&local_38,param_4,param_5);
      FUN_014fb9d0(&local_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x18;
      uVar1 = 0;
    } while( true );
  }
  piVar2 = (int *)&DAT_00000001;
  puVar3 = &UNK_01cfc1a4;
LAB_0158ab18:
  return CONCAT44(puVar3,piVar2);
LAB_0158aadc:
  local_30 = local_44;
  local_2c = local_40 + local_3c * 4;
  local_38 = local_40;
  local_34 = local_40;
  piVar2 = (int *)thunk_FUN_01be5118(0x10);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  puVar3 = &UNK_01cfc168;
  *piVar2 = local_38;
  piVar2[1] = local_34;
  piVar2[2] = local_30;
  piVar2[3] = local_2c;
  goto LAB_0158ab18;
}

