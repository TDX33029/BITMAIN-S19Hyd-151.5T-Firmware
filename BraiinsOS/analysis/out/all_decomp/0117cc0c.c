// FUN_0117cc0c @ 0117cc0c size=580 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0117cc0c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_50 = *(uint *)(param_2 + 4);
  local_4c = *(uint *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  local_60 = 4;
  iVar3 = *(int *)(param_1 + 8);
  local_44 = 0;
  if (local_50 == 0) {
    local_38 = 0;
  }
  iVar6 = *(int *)(param_1 + 4);
  local_54 = 0;
  local_58 = (uint)(local_50 != 0);
  local_5c = 0;
  local_64 = 0;
  local_48 = local_58;
  iStack_40 = local_50;
  uStack_3c = local_4c;
  if (iVar3 == 0) {
    while( true ) {
      uVar11 = FUN_00f45584(&local_58);
      iVar3 = (int)uVar11;
      if (iVar3 == 0) break;
      local_2c = *(int *)(iVar3 + 8);
      local_30 = *(undefined4 *)(iVar3 + 4);
      local_34 = 0x80000000;
      local_28 = param_3;
      uVar11 = FUN_011cf8a8(param_1 + 0xc,(int)((ulonglong)uVar11 >> 0x20),&local_34,param_4,param_5
                           );
      FUN_011590bc(&local_64,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    }
  }
  else {
LAB_0117cc90:
    uVar11 = FUN_00f45584(&local_58);
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar9 = (int)uVar11;
    if (iVar9 != 0) {
      uVar5 = *(undefined4 *)(iVar9 + 4);
      iVar7 = *(int *)(iVar9 + 8);
      iVar9 = iVar6;
      iVar10 = iVar3 << 5;
      do {
        if (*(int *)(iVar9 + 8) == iVar7) {
          uVar8 = *(undefined4 *)(iVar9 + 4);
          iVar1 = thunk_FUN_016dd50a(uVar8,uVar5,iVar7);
          if (iVar1 == 0) {
            local_34 = 0x80000000;
            local_30 = uVar8;
            local_2c = iVar7;
            local_28 = param_3;
            uVar11 = FUN_011cf8a8(iVar9 + 0xc,uVar4,&local_34,param_4,param_5);
            FUN_011590bc(&local_64,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
            goto LAB_0117cc90;
          }
        }
        iVar9 = iVar9 + 0x20;
        iVar10 = iVar10 + -0x20;
      } while (iVar10 != 0);
      local_34 = 0x80000000;
      local_30 = uVar5;
      local_2c = iVar7;
      local_28 = param_3;
      uVar11 = FUN_011cf8a8(param_1 + 0xc,uVar4,&local_34,param_4,param_5);
      FUN_011590bc(&local_64,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      goto LAB_0117cc90;
    }
  }
  local_50 = local_64;
  local_4c = local_60 + local_5c * 4;
  local_58 = local_60;
  local_54 = local_60;
  puVar2 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = local_50;
  puVar2[3] = local_4c;
  return puVar2;
}

