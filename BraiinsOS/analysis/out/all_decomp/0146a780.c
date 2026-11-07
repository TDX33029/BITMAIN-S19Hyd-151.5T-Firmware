// FUN_0146a780 @ 0146a780 size=508 calls_out=7 calls_in=1
// strings: 

void FUN_0146a780(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  int local_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  
  puVar7 = *(undefined4 **)(param_2 + 0x18);
  while (FUN_01573254(&local_38,param_2,FUN_0146a5c0,&LAB_01571a6c), local_38 == 0) {
    if (local_30 == 0x80000000) goto LAB_0146a8d4;
    if ((char)local_34 == '\0') {
      local_48 = 5;
      goto LAB_0146a8f4;
    }
    if (local_30 != 0) {
      thunk_FUN_016d3fb4(local_2c);
    }
  }
  if (local_34 != 6) {
    local_48 = local_34;
    uStack_44 = local_30;
    uStack_40 = local_2c;
    iStack_3c = local_28;
    if (local_34 == 5) {
LAB_0146a8f4:
      uVar1 = 0;
      if (local_28 < 0) {
LAB_0146a900:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar1,local_28);
      }
      if (local_28 == 0) {
        iVar6 = 0;
        iVar2 = 1;
      }
      else {
        iVar2 = thunk_FUN_016d4a50(local_28);
        if (iVar2 == 0) {
          uVar1 = 1;
          goto LAB_0146a900;
        }
        iVar6 = local_28;
      }
      FUN_016dd1aa(iVar2,local_2c,local_28);
      if ((local_30 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_2c);
      }
      *param_1 = iVar6;
      param_1[1] = iVar2;
      param_1[2] = local_28;
      return;
    }
    local_38 = local_38 & 0xffff0000;
    uVar1 = FUN_014c9748(&local_38,&DAT_004090cc,0x1c);
    FUN_014aed48(&local_48);
    piVar5 = (int *)*puVar7;
    if (piVar5 != (int *)0x0) {
      if (((short)piVar5[0x12] == 3) && (piVar5[0x13] != 0)) {
        (**(code **)(piVar5[0x13] + 0x10))(piVar5 + 0x16,piVar5[0x14],piVar5[0x15]);
      }
      iVar6 = piVar5[0x17];
      if (iVar6 != 0) {
        puVar4 = (undefined4 *)piVar5[0x18];
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar6);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(iVar6);
        }
      }
      iVar6 = *piVar5;
      bVar8 = iVar6 != 2;
      if (bVar8) {
        iVar6 = piVar5[4];
      }
      if (bVar8 && iVar6 != 0) {
        thunk_FUN_016d3fb4(piVar5[5]);
      }
      thunk_FUN_016d3fb4(piVar5);
    }
    *puVar7 = uVar1;
  }
LAB_0146a8d4:
  *param_1 = -0x80000000;
  return;
}

