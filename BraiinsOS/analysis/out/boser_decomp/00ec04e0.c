// FUN_00ec04e0 @ 00ec04e0 size=964 calls_out=5 calls_in=2
// strings: assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code | a UUID string | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x0096ad8c) */
/* WARNING: Removing unreachable block (ram,0x00ebd81c) */
/* WARNING: Removing unreachable block (ram,0x0096ac48) */
/* WARNING: Removing unreachable block (ram,0x00ebd804) */
/* WARNING: Removing unreachable block (ram,0x00ebd524) */
/* WARNING: Removing unreachable block (ram,0x00ebd7b4) */

int FUN_00ec04e0(char *param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  int local_34;
  undefined4 *local_30;
  int *local_2c;
  int iStack_28;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar13 = *(int **)(param_1 + 4);
  local_38 = param_3;
  local_34 = param_2;
  if (param_1[1] != '\x01') {
    uVar9 = 1;
    iVar11 = *piVar13;
    pcVar6 = ",";
    do {
      uVar12 = *(uint *)(iVar11 + 4);
      uVar7 = uVar12 ^ 0x7fffffff;
      if (uVar9 < uVar7) {
        uVar7 = uVar9;
      }
      FUN_01284394(iVar11,pcVar6,uVar7);
      if (uVar12 == 0x7fffffff) goto LAB_00ec0618;
      pcVar6 = pcVar6 + uVar7;
      uVar9 = uVar9 - uVar7;
    } while (uVar9 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar13,*(undefined4 *)(local_34 + 4),*(undefined4 *)(local_34 + 8));
  if ((char)local_30 == '\x04') {
    uVar9 = 1;
    iVar11 = *piVar13;
    pcVar6 = ":";
    do {
      uVar12 = *(uint *)(iVar11 + 4);
      uVar7 = uVar12 ^ 0x7fffffff;
      if (uVar9 < uVar7) {
        uVar7 = uVar9;
      }
      FUN_01284394(iVar11,pcVar6,uVar7);
      puVar1 = local_38;
      if (uVar12 == 0x7fffffff) goto LAB_00ec0618;
      pcVar6 = pcVar6 + uVar7;
      uVar9 = uVar9 - uVar7;
    } while (uVar9 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*local_38) {
    case 0:
      uVar9 = 4;
      puVar8 = &DAT_0056d030;
      iVar11 = *piVar13;
      while( true ) {
        uVar12 = *(uint *)(iVar11 + 4);
        uVar7 = uVar12 ^ 0x7fffffff;
        if (uVar9 < uVar7) {
          uVar7 = uVar9;
        }
        FUN_01284394(iVar11,puVar8,uVar7);
        if (uVar12 == 0x7fffffff) break;
        puVar8 = puVar8 + uVar7;
        uVar9 = uVar9 - uVar7;
        if (uVar9 == 0) {
          return 0;
        }
      }
LAB_00ebd7c4:
      iVar11 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar11;
    case 1:
      uVar3 = 5;
      pcVar6 = "true\x1e\x05";
      if (local_38[1] == '\0') {
        pcVar6 = "f";
      }
      if (local_38[1] != '\0') {
        uVar3 = 4;
      }
      FUN_00a5208c(&puStack_58,*piVar13,pcVar6,uVar3);
      break;
    case 2:
      iVar11 = *piVar13;
      puVar2 = (ulonglong *)(local_38 + 0x10);
      if (*(int *)(local_38 + 8) == 0) {
        uVar16 = FUN_01415f98(&iStack_50,0,(int)*puVar2,*(undefined4 *)(local_38 + 0x14));
      }
      else if (*(int *)(local_38 + 8) == 1) {
        uVar16 = FUN_0196bd9c(&iStack_50,1,(int)*puVar2,*(undefined4 *)(local_38 + 0x14));
      }
      else {
        uVar15 = *puVar2;
        uVar9 = (uint)(uVar15 >> 0x20);
        if ((int)uVar15 == 0 && (uVar15 & 0xfffff00000000) == 0) {
          if ((int)uVar15 == 0 && (uVar9 & 0x7fffffff) == 0x7ff00000) goto LAB_00b0e9e0;
        }
        else if (0x7fefffff < (uVar9 & 0x7fffffff)) {
LAB_00b0e9e0:
          uVar9 = 4;
          puVar8 = &DAT_0056d030;
          while( true ) {
            uVar12 = *(uint *)(iVar11 + 4);
            uVar7 = uVar12 ^ 0x7fffffff;
            if (uVar9 < uVar7) {
              uVar7 = uVar9;
            }
            FUN_01284394(iVar11,puVar8,uVar7);
            if (uVar12 == 0x7fffffff) break;
            puVar8 = puVar8 + uVar7;
            uVar9 = uVar9 - uVar7;
            if (uVar9 == 0) {
              return 0;
            }
          }
          iVar11 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar11;
        }
        iVar5 = FUN_01afb0f8(&iStack_50);
        uVar16 = CONCAT44(iVar5 - (int)&iStack_50,&iStack_50);
      }
      FUN_00a5208c(&iStack_28,iVar11,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      iVar11 = 0;
      if ((char)iStack_28 != '\x04') {
        iVar11 = FUN_01966f50(iStack_28,unaff_r4);
      }
      return iVar11;
    case 3:
      FUN_0096b2b0(&puStack_58,*piVar13,*(undefined4 *)(local_38 + 8),
                   *(undefined4 *)(local_38 + 0xc));
      break;
    case 4:
      iVar4 = *(int *)(local_38 + 8);
      uVar9 = 1;
      iVar11 = *(int *)(local_38 + 0xc);
      iVar5 = *piVar13;
      puVar8 = &DAT_0053340d;
      iStack_28 = iVar4 + iVar11 * 0x18;
      local_2c = piVar13;
      do {
        uVar12 = *(uint *)(iVar5 + 4);
        uVar7 = uVar12 ^ 0x7fffffff;
        if (uVar9 < uVar7) {
          uVar7 = uVar9;
        }
        FUN_01284394(iVar5,puVar8,uVar7);
        piVar13 = local_2c;
        if (uVar12 == 0x7fffffff) goto LAB_0096ad60;
        puVar8 = puVar8 + uVar7;
        uVar9 = uVar9 - uVar7;
      } while (uVar9 != 0);
      if (iVar11 == 0) {
        uVar9 = 1;
        pcVar6 = "]";
        do {
          uVar12 = *(uint *)(iVar5 + 4);
          uVar7 = uVar12 ^ 0x7fffffff;
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          FUN_01284394(iVar5,pcVar6,uVar7);
          if (uVar12 == 0x7fffffff) goto LAB_0096ad60;
          pcVar6 = pcVar6 + uVar7;
          uVar9 = uVar9 - uVar7;
        } while (uVar9 != 0);
      }
      else {
        iVar11 = 0x100;
        local_30 = &DAT_01d2e7b8;
        do {
          if (iVar11 != 0x100) {
            uVar9 = 1;
            pcVar6 = ",";
            do {
              uVar12 = *(uint *)(iVar5 + 4);
              uVar7 = uVar12 ^ 0x7fffffff;
              if (uVar9 < uVar7) {
                uVar7 = uVar9;
              }
              FUN_01284394(iVar5,pcVar6,uVar7);
              if (uVar12 == 0x7fffffff) goto LAB_0096ad70;
              pcVar6 = pcVar6 + uVar7;
              uVar9 = uVar9 - uVar7;
            } while (uVar9 != 0);
          }
          iVar11 = FUN_0096addc(iVar4,piVar13);
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar4 = iVar4 + 0x18;
          iVar11 = 0x200;
        } while (iVar4 != iStack_28);
        uVar9 = 1;
        pcVar6 = "]";
        do {
          uVar12 = *(uint *)(iVar5 + 4);
          uVar7 = uVar12 ^ 0x7fffffff;
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          FUN_01284394(iVar5,pcVar6,uVar7);
          if (uVar12 == 0x7fffffff) goto LAB_0096ad70;
          pcVar6 = pcVar6 + uVar7;
          uVar9 = uVar9 - uVar7;
        } while (uVar9 != 0);
      }
      return 0;
    case 5:
      uVar9 = 1;
      puVar14 = *(undefined1 **)(local_38 + 0xc);
      pcVar6 = "{";
      iVar11 = *piVar13;
      do {
        uVar12 = *(uint *)(iVar11 + 4);
        uVar7 = uVar12 ^ 0x7fffffff;
        if (uVar9 < uVar7) {
          uVar7 = uVar9;
        }
        FUN_01284394(iVar11,pcVar6,uVar7);
        if (uVar12 == 0x7fffffff) goto LAB_00ebd7c4;
        pcVar6 = pcVar6 + uVar7;
        uVar9 = uVar9 - uVar7;
      } while (uVar9 != 0);
      iVar5 = 0x100;
      if (puVar14 == (undefined1 *)0x0) {
        uVar9 = 1;
        pcVar6 = "}";
        do {
          uVar12 = *(uint *)(iVar11 + 4);
          uVar7 = uVar12 ^ 0x7fffffff;
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          FUN_01284394(iVar11,pcVar6,uVar7);
          if (uVar12 == 0x7fffffff) goto LAB_00ebd7c4;
          pcVar6 = pcVar6 + uVar7;
          uVar9 = uVar9 - uVar7;
        } while (uVar9 != 0);
        iVar5 = 0;
      }
      iStack_50 = *(int *)(puVar1 + 4);
      uStack_4c = *(undefined4 *)(puVar1 + 8);
      local_38 = puVar14;
      if (iStack_50 == 0) {
        local_38 = (undefined1 *)0x0;
      }
      puStack_58 = (undefined4 *)(uint)(iStack_50 != 0);
      uStack_44 = 0;
      iVar11 = *piVar13;
      puStack_54 = (undefined4 *)0x0;
      puStack_48 = puStack_58;
      iStack_40 = iStack_50;
      uStack_3c = uStack_4c;
      do {
        uVar16 = FUN_01a41998(&puStack_58);
        iVar4 = (int)uVar16;
        if (iVar4 == 0) {
          if (iVar5 == 0) {
            return 0;
          }
          uVar9 = 1;
          pcVar6 = "}";
          iVar11 = *piVar13;
          while( true ) {
            uVar12 = *(uint *)(iVar11 + 4);
            uVar7 = uVar12 ^ 0x7fffffff;
            if (uVar9 < uVar7) {
              uVar7 = uVar9;
            }
            FUN_01284394(iVar11,pcVar6,uVar7);
            if (uVar12 == 0x7fffffff) break;
            pcVar6 = pcVar6 + uVar7;
            uVar9 = uVar9 - uVar7;
            if (uVar9 == 0) {
              return 0;
            }
          }
LAB_00ebd7e4:
          local_30 = (undefined4 *)0x2;
          local_2c = &DAT_01d2e7b8;
          goto LAB_00ebd7e8;
        }
        uVar10 = *(undefined4 *)(iVar4 + 4);
        uVar3 = *(undefined4 *)(iVar4 + 8);
        if (iVar5 != 0x100) {
          uVar9 = 1;
          pcVar6 = ",";
          do {
            uVar12 = *(uint *)(iVar11 + 4);
            uVar7 = uVar12 ^ 0x7fffffff;
            if (uVar9 < uVar7) {
              uVar7 = uVar9;
            }
            FUN_01284394(iVar11,pcVar6,uVar7);
            if (uVar12 == 0x7fffffff) goto LAB_00ebd7e4;
            pcVar6 = pcVar6 + uVar7;
            uVar9 = uVar9 - uVar7;
          } while (uVar9 != 0);
        }
        FUN_0096b2b0(&local_30,iVar11,uVar10,uVar3);
        if ((char)local_30 != '\x04') goto LAB_00ebd7e8;
        uVar9 = 1;
        pcVar6 = ":";
        do {
          uVar12 = *(uint *)(iVar11 + 4);
          uVar7 = uVar12 ^ 0x7fffffff;
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          FUN_01284394(iVar11,pcVar6,uVar7);
          if (uVar12 == 0x7fffffff) goto LAB_00ebd7e4;
          pcVar6 = pcVar6 + uVar7;
          uVar9 = uVar9 - uVar7;
        } while (uVar9 != 0);
        iVar4 = FUN_0096addc((int)((ulonglong)uVar16 >> 0x20),piVar13);
        iVar5 = 0x200;
        if (iVar4 != 0) {
          return iVar4;
        }
      } while( true );
    }
    if ((char)puStack_58 == '\x04') {
      return 0;
    }
    local_30 = puStack_58;
    local_2c = puStack_54;
LAB_00ebd7e8:
    iVar11 = FUN_01966f50(local_30,local_2c);
    return iVar11;
  }
LAB_00ec0624:
  iVar11 = FUN_01966f50(local_30,local_2c);
  return iVar11;
LAB_00ec0618:
  local_30 = (undefined4 *)0x2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec0624;
LAB_0096ad60:
  local_30 = &DAT_01d2e7b8;
LAB_0096ad70:
  iVar11 = FUN_01966f50(2,local_30);
  return iVar11;
}

