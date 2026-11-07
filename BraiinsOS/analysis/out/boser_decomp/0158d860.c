// FUN_0158d860 @ 0158d860 size=312 calls_out=4 calls_in=0
// strings: 

undefined8
FUN_0158d860(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 == '\x04') {
    iVar6 = *(int *)(param_2 + 8);
    local_3c = 0;
    iStack_44 = 0;
    iStack_40 = 4;
    uVar3 = *(uint *)(param_1 + 0x14);
    iVar5 = iVar6 + *(int *)(param_2 + 0xc) * 0x18;
    uVar4 = uVar3;
    do {
      if (uVar3 == 0) {
        if (iVar6 == iVar5) goto LAB_0158d948;
      }
      else {
        if (((uint)(iVar5 - iVar6) >> 3) * -0x55555555 <= uVar3) goto LAB_0158d948;
        iVar6 = iVar6 + uVar3 * 0x18;
      }
      local_38 = -0x7fffffff;
      local_34 = uVar4;
      local_2c = param_3;
      uVar7 = FUN_01576990(param_1,iVar6,&local_38,param_4,param_5);
      FUN_014fb9d0(&iStack_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      iVar6 = iVar6 + 0x18;
      uVar4 = uVar4 + 1;
      uVar3 = 0;
    } while( true );
  }
  piVar1 = (int *)&DAT_00000001;
  puVar2 = &UNK_01cfc1a4;
LAB_0158d984:
  return CONCAT44(puVar2,piVar1);
LAB_0158d948:
  local_30 = iStack_44;
  local_2c = iStack_40 + local_3c * 4;
  local_38 = iStack_40;
  local_34 = iStack_40;
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
  goto LAB_0158d984;
}

