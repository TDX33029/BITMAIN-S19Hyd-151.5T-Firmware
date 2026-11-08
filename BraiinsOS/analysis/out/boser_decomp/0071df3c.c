// FUN_0071df3c @ 0071df3c size=512 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0071df3c(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint local_48;
  int local_44;
  uint local_40;
  char local_38;
  char local_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  uint local_30;
  int iStack_2c;
  
  pbVar7 = (byte *)*param_2;
  if (param_2[1] == 0) {
    *(byte **)(param_1 + 4) = pbVar7;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    cVar6 = '\x13';
    *(byte **)(param_1 + 8) = pbVar7;
LAB_0071e098:
    *param_1 = cVar6;
  }
  else {
    uVar9 = (uint)*pbVar7;
    *param_2 = pbVar7 + 1;
    param_2[1] = param_2[1] + -1;
    if (uVar9 == 0) {
      local_40 = 0;
      local_44 = 2;
      local_48 = 0;
    }
    else {
      iVar13 = 2;
      iVar4 = FUN_01298504(uVar9 << 2,2);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(2,uVar9 << 2);
      }
      iVar14 = 0;
      local_40 = 0;
      local_48 = uVar9;
      local_44 = iVar4;
      do {
        uVar1 = local_40;
        FUN_00719bb8(&local_38,param_2);
        iVar3 = iStack_2c;
        uVar10 = local_30;
        if (local_38 != 'O') {
          *(undefined4 *)(param_1 + 4) = uStack_34;
          *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_34,CONCAT21(uStack_36,local_37));
          *(uint *)(param_1 + 8) = local_30;
          *(int *)(param_1 + 0xc) = iStack_2c;
          *param_1 = local_38;
          goto LAB_0071e114;
        }
        FUN_00719c74(&local_38,param_2);
        uVar2 = uStack_36;
        if (0xfffe < uVar10) {
          uVar10 = 0xffff;
        }
        if (iVar3 != 0) {
          uVar10 = 0xffff;
        }
        if (uVar10 == 1) {
          iVar14 = iVar14 + 1;
        }
        if (local_38 != 'O') {
          puVar8 = (undefined4 *)((uint)&local_38 | 4);
          uVar11 = puVar8[1];
          uVar12 = puVar8[2];
          *(undefined4 *)(param_1 + 4) = *puVar8;
          *(undefined4 *)(param_1 + 8) = uVar11;
          *(undefined4 *)(param_1 + 0xc) = uVar12;
          *(undefined2 *)(param_1 + 2) = uStack_36;
          param_1[1] = local_37;
          *param_1 = local_38;
          goto LAB_0071e114;
        }
        if (uVar1 == local_48) {
          FUN_00719440(&local_48);
          iVar4 = local_44;
        }
        local_40 = uVar1 + 1;
        puVar5 = (undefined2 *)(iVar4 + iVar13);
        *puVar5 = uVar2;
        iVar13 = iVar13 + 4;
        puVar5[-1] = (short)uVar10;
      } while (uVar9 != local_40);
      if (iVar14 == 1) {
        *(uint *)(param_1 + 4) = local_48;
        *(int *)(param_1 + 8) = local_44;
        *(uint *)(param_1 + 0xc) = local_40;
        cVar6 = 'O';
        goto LAB_0071e098;
      }
    }
    *param_1 = 'G';
LAB_0071e114:
    FUN_0134c054(local_48,local_44,2,4);
  }
  return;
}

