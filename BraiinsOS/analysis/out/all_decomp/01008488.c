// FUN_01008488 @ 01008488 size=864 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_01008488(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 *local_54 [10];
  undefined4 *local_2c;
  undefined4 *local_28;
  
  local_28 = param_3 + param_4 * 2;
  local_54[0] = &DAT_00110000;
  local_7c = &DAT_00110000;
  uVar4 = 0;
  local_2c = param_3;
LAB_010084ec:
  do {
    do {
      while( true ) {
        uVar16 = FUN_01008800(&local_7c);
        if ((int)uVar16 != 0) break;
        puVar2 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
        if (local_2c != (undefined4 *)0x0) {
          puVar2 = local_28;
        }
        if (local_2c == (undefined4 *)0x0 || local_2c == puVar2) {
          uVar16 = FUN_01008800(local_54);
          if ((int)uVar16 == 0) {
            return uVar4;
          }
          break;
        }
        local_78 = *local_2c;
        uStack_74 = local_2c[1];
        local_2c = local_2c + 2;
        local_58 = 0;
        local_60 = 0;
        local_64 = 1;
        local_68 = 0x2f;
        local_7c = (undefined1 *)0x2f;
        uStack_70 = 0;
        local_6c = uStack_74;
        local_5c = uStack_74;
      }
      uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
      iVar5 = (int)uVar16;
      if (uVar13 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        if (*(char *)(uVar13 + iVar5 + -1) == '/') {
          iVar6 = -1;
        }
      }
      cVar3 = FUN_01008b30(iVar5,uVar13 + iVar6);
    } while (cVar3 == '\0');
    if (cVar3 != '\x01') {
      iVar6 = param_1[2];
      if ((uint)(*param_1 - iVar6) < uVar13) {
        FUN_010e02bc(param_1,iVar6,uVar13);
        iVar6 = param_1[2];
      }
      FUN_016dd1aa(param_1[1] + iVar6,iVar5,uVar13);
      uVar13 = iVar6 + uVar13;
      goto LAB_01008748;
    }
    uVar7 = param_1[2];
    if (param_2 + 1U < uVar7) {
      iVar5 = param_1[1];
      uVar9 = uVar7 - 1;
      if (*(char *)(iVar5 + uVar9) < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar5,uVar7,0,uVar9,&DAT_01882034);
      }
      uVar10 = (iVar5 + 3U & 0xfffffffc) - iVar5;
      uVar8 = uVar9;
LAB_01008604:
      uVar14 = uVar8;
      uVar15 = uVar8;
      if (uVar10 <= uVar8) {
        uVar13 = uVar8 - uVar10 & 7;
        uVar15 = uVar8 - uVar13;
        if (uVar8 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar15,uVar8,uVar8,&DAT_018811ec);
        }
        uVar14 = uVar10;
      }
      uVar13 = uVar8;
      do {
        if (uVar13 == uVar15) {
          iVar6 = uVar15 - 4;
          goto LAB_01008660;
        }
        pcVar1 = (char *)(iVar5 + -1 + uVar13);
        uVar13 = uVar13 - 1;
      } while (*pcVar1 != '/');
      goto LAB_010086d0;
    }
    uVar4 = 1;
  } while( true );
  while (puVar11 = (uint *)(iVar5 + iVar6), iVar6 = iVar6 + -8, uVar15 = *puVar11 ^ 0x2f2f2f2f,
        uVar12 = puVar11[-1],
        ((0x1010100 - (uVar12 ^ 0x2f2f2f2f) | uVar12) & 0x80808080 & (0x1010100 - uVar15 | uVar15))
        == 0x80808080) {
LAB_01008660:
    uVar13 = iVar6 + 4;
    if (uVar13 <= uVar14) break;
  }
  if (uVar8 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar13,uVar8,&DAT_018811dc);
  }
  do {
    if (uVar13 == 0) goto LAB_010087ac;
    pcVar1 = (char *)(iVar5 + -1 + uVar13);
    uVar13 = uVar13 - 1;
  } while (*pcVar1 != '/');
LAB_010086d0:
  if ((uVar13 < uVar9) && (*(char *)(iVar5 + uVar13) == '/')) goto code_r0x010086e4;
  uVar8 = uVar13;
  if (uVar9 < uVar13) {
LAB_010087ac:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01882044);
  }
  goto LAB_01008604;
code_r0x010086e4:
  if (uVar13 < uVar7) {
    uVar13 = uVar13 + 1;
    if (uVar13 < uVar7) {
      if (*(char *)(iVar5 + uVar13) < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00418707,0x30,&DAT_01882054);
      }
LAB_01008748:
      param_1[2] = uVar13;
    }
    else {
      param_1[2] = uVar13;
    }
  }
  goto LAB_010084ec;
}

