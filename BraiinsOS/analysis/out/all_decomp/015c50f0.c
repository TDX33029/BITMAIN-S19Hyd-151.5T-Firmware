// FUN_015c50f0 @ 015c50f0 size=800 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_015c50f0(uint *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  iVar3 = param_3[2];
  uVar12 = (uint)(ushort)param_1[3];
  uVar8 = *param_1;
  pbVar9 = (byte *)param_1[1];
  uVar11 = param_1[2];
  if (pbVar9 == (byte *)0x0) {
    if (uVar8 == 0) goto LAB_015c5180;
    if (iVar3 == 0) goto LAB_015c51e8;
LAB_015c5274:
    local_44 = 1;
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
  }
  else {
    if (uVar8 == 0) {
LAB_015c5180:
      FUN_015e6ab4(&local_40);
      if (local_40 != (undefined4 *)&DAT_80000000) {
        local_44 = local_3c;
        goto LAB_015c52b0;
      }
      if ((char)local_3c != '\x03') goto LAB_015c5274;
      puVar2 = (undefined4 *)local_38[1];
      uVar7 = *local_38;
      pcVar4 = (code *)*puVar2;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    else {
      if (iVar3 == 0) {
        param_1 = (uint *)(uint)*pbVar9;
      }
      if (iVar3 != 0 || param_1 != (uint *)0x0) {
        puVar2 = (undefined4 *)FUN_016dd8a2(pbVar9);
        if (puVar2 == (undefined4 *)0x0) {
          local_44 = 1;
        }
        else {
          local_44 = thunk_FUN_016d4a50(puVar2);
joined_r0x015c514c:
          if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar2);
          }
        }
        FUN_016dd1aa(local_44,pbVar9,puVar2);
        local_40 = puVar2;
        local_38 = puVar2;
        goto LAB_015c52b0;
      }
LAB_015c51e8:
      if (param_3[3] != -0x80000000) {
        iVar3 = param_3[5];
      }
      if (param_3[3] != -0x80000000 && iVar3 != 0) {
        iVar5 = param_3[4];
        iVar3 = iVar3 * 0x38;
        do {
          bVar13 = uVar8 <= *(uint *)(iVar5 + 0x10);
          if (*(uint *)(iVar5 + 0x10) <= uVar8) {
            bVar13 = *(uint *)(iVar5 + 0x14) <= uVar8;
          }
          if ((!bVar13) && (puVar2 = *(undefined4 **)(iVar5 + 0x30), puVar2 != (undefined4 *)0x0)) {
            pbVar9 = *(byte **)(iVar5 + 0x2c);
            local_44 = FUN_0063f47c(puVar2,1);
            goto joined_r0x015c514c;
          }
          iVar5 = iVar5 + 0x38;
          iVar3 = iVar3 + -0x38;
        } while (iVar3 != 0);
      }
      FUN_015e6ab4(&local_40);
      if (local_40 != (undefined4 *)&DAT_80000000) {
        local_44 = local_3c;
        goto LAB_015c52b0;
      }
      if ((local_3c & 0xff) != 3) goto LAB_015c5274;
      puVar2 = (undefined4 *)local_38[1];
      uVar7 = *local_38;
      pcVar4 = (code *)*puVar2;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    local_44 = 1;
    thunk_FUN_016d3fb4(local_38);
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
  }
LAB_015c52b0:
  uVar10 = uVar11;
  if (uVar12 == 0) {
    uVar10 = 4;
  }
  uVar1 = uVar12;
  if (uVar11 == 0) {
    uVar10 = 4;
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    uVar12 = 0;
    local_30 = 4;
  }
  else {
    iVar3 = uVar1 * 8;
    local_30 = thunk_FUN_016d4a50(iVar3);
    if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3);
    }
    iVar5 = 0;
    do {
      iVar6 = uVar10 + iVar5 * 4;
      uVar7 = *(undefined4 *)(iVar6 + 8);
      puVar2 = (undefined4 *)(local_30 + 4 + iVar5);
      *puVar2 = *(undefined4 *)(iVar6 + 0x14);
      iVar5 = iVar5 + 8;
      puVar2[-1] = uVar7;
    } while (iVar3 != iVar5);
  }
  iVar3 = param_3[2];
  local_3c = local_44;
  local_34 = uVar12;
  local_2c = uVar12;
  local_28 = uVar8;
  if (iVar3 == *param_3) {
    FUN_0160271c(param_3);
  }
  puVar2 = (undefined4 *)(param_3[1] + iVar3 * 0x1c);
  *puVar2 = local_40;
  puVar2[1] = local_3c;
  puVar2[2] = local_38;
  puVar2[3] = local_34;
  puVar2[4] = local_30;
  puVar2[5] = local_2c;
  puVar2[6] = local_28;
  param_3[2] = iVar3 + 1;
  return 0;
}

