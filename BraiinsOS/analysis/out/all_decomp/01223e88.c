// FUN_01223e88 @ 01223e88 size=1472 calls_out=10 calls_in=0
// strings: more than one subschema succeeded

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x012242c0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01223e88(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  int local_108;
  undefined1 auStack_f8 [60];
  char local_bc;
  undefined1 auStack_b8 [64];
  uint local_78;
  int local_74;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar11 = *(uint *)(param_2 + 8);
  piVar12 = *(int **)(param_2 + 4);
  piVar1 = piVar12 + uVar11 * 5;
  piVar13 = piVar12;
  uVar10 = 0;
  do {
    while( true ) {
      uVar9 = uVar10;
      if (piVar13 == piVar1) {
        uVar10 = uVar11 * 0x40;
        bVar15 = 0x3fffffe < uVar11;
        bVar14 = uVar11 == 0x3ffffff;
        local_78 = 0;
        if (uVar11 < 0x4000000) {
          bVar15 = 0x7ffffffb < uVar10;
          bVar14 = uVar10 == 0x7ffffffc;
        }
        if (!(!bVar15 || bVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4();
        }
        if (uVar10 == 0) {
          iVar2 = 4;
        }
        else {
          iVar2 = thunk_FUN_016d4a50(uVar10);
          local_78 = uVar11;
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar10);
          }
        }
        uVar10 = 0;
        local_74 = iVar2;
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            FUN_011c9534(&local_68,piVar12,param_3,param_4,param_5,param_6);
            piVar13 = (int *)(iVar2 + uVar10 * 0x40);
            uVar10 = uVar10 + 1;
            piVar12 = piVar12 + 5;
            *piVar13 = local_68;
            piVar13[1] = local_64;
            piVar13[2] = local_60;
            piVar13[3] = iStack_5c;
            piVar13[4] = iStack_58;
            piVar13[5] = local_54;
            piVar13[6] = iStack_50;
            piVar13[7] = iStack_4c;
            piVar13[8] = iStack_48;
            piVar13[9] = iStack_44;
            piVar13[10] = local_40;
            piVar13[0xb] = iStack_3c;
            piVar13[0xc] = iStack_38;
            piVar13[0xd] = iStack_34;
            piVar13[0xe] = iStack_30;
            piVar13[0xf] = iStack_2c;
          } while (uVar11 != uVar10);
          uVar10 = uVar11;
        }
        param_1[3] = local_78;
        param_1[4] = local_74;
        param_1[5] = uVar10;
        param_1[6] = 0;
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        return;
      }
      piVar8 = piVar13 + 5;
      iVar2 = *piVar13;
      uVar4 = 1;
      uVar10 = uVar9 + 1;
      if ((int)*(uint *)(iVar2 + 8) < 0) {
        uVar4 = *(uint *)(iVar2 + 8) ^ 0x80000000;
      }
      piVar13 = piVar8;
      if (uVar4 == 0) break;
      if (uVar4 == 1) {
        iVar5 = *(int *)(iVar2 + 0x10);
        puVar7 = *(undefined4 **)(iVar2 + 0xc);
        if (iVar5 == 1) {
          iVar2 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
          if (iVar2 != 0) goto LAB_01223fa8;
        }
        else {
          if (iVar5 == 0) goto LAB_01223fa8;
          puVar3 = puVar7 + iVar5 * 8;
          while( true ) {
            iVar2 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
            if (iVar2 == 0) break;
            puVar7 = puVar7 + 8;
            if (puVar7 == puVar3) goto LAB_01223fa8;
          }
        }
      }
      else {
        puVar7 = *(undefined4 **)(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 0x14) << 5;
        do {
          if (iVar2 == 0) goto LAB_01223fa8;
          iVar5 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
          iVar2 = iVar2 + -0x20;
          puVar7 = puVar7 + 8;
        } while (iVar5 != 0);
      }
    }
  } while (*(int *)(iVar2 + 0xc) != 0);
LAB_01223fa8:
  if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,uVar11,&DAT_0188a648);
  }
  piVar13 = piVar12 + uVar9 * 5;
  do {
    while( true ) {
      piVar13 = piVar13 + 5;
      if (piVar13 == piVar1) {
        FUN_011c9534(auStack_b8,piVar12 + uVar9 * 5,param_3,param_4,param_5,param_6);
        FUN_012120c0(param_1,auStack_b8);
        return;
      }
      iVar2 = *piVar13;
      uVar10 = 1;
      if ((int)*(uint *)(iVar2 + 8) < 0) {
        uVar10 = *(uint *)(iVar2 + 8) ^ 0x80000000;
      }
      if (uVar10 == 0) break;
      if (uVar10 == 1) {
        iVar5 = *(int *)(iVar2 + 0x10);
        puVar7 = *(undefined4 **)(iVar2 + 0xc);
        if (iVar5 == 1) {
          iVar2 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
          if (iVar2 != 0) goto LAB_012240a4;
        }
        else {
          if (iVar5 == 0) goto LAB_012240a4;
          puVar3 = puVar7 + iVar5 * 8;
          while (iVar2 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6), iVar2 != 0) {
            puVar7 = puVar7 + 8;
            if (puVar7 == puVar3) goto LAB_012240a4;
          }
        }
      }
      else {
        puVar7 = *(undefined4 **)(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 0x14) << 5;
        do {
          if (iVar2 == 0) goto LAB_012240a4;
          iVar5 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
          iVar2 = iVar2 + -0x20;
          puVar7 = puVar7 + 8;
        } while (iVar5 != 0);
      }
    }
  } while (*(int *)(iVar2 + 0xc) != 0);
LAB_012240a4:
  iVar2 = 0;
  uVar10 = 0;
  local_60 = 0;
  local_108 = 4;
  local_64 = 4;
  local_68 = 0;
  do {
    if (uVar10 == uVar9) {
LAB_01224104:
      FUN_011c9534(auStack_f8,piVar12,param_3,param_4,param_5,param_6);
      if (local_bc == '\0') {
        FUN_011644f8(auStack_f8);
      }
      else {
        if (iVar2 == local_68) {
          FUN_011ca644(&local_68);
          local_108 = local_64;
        }
        FUN_016dd52c(local_108 + iVar2 * 0x40,auStack_f8,0x40);
        iVar2 = iVar2 + 1;
        local_60 = iVar2;
      }
    }
    else {
      iVar5 = *piVar12;
      uVar11 = 1;
      if ((int)*(uint *)(iVar5 + 8) < 0) {
        uVar11 = *(uint *)(iVar5 + 8) ^ 0x80000000;
      }
      if (uVar11 == 0) {
        if (*(int *)(iVar5 + 0xc) == 0) goto LAB_01224104;
      }
      else {
        if (uVar11 == 1) {
          iVar6 = *(int *)(iVar5 + 0x10);
          puVar7 = *(undefined4 **)(iVar5 + 0xc);
          if (iVar6 == 1) {
            iVar5 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
            if (iVar5 == 0) goto LAB_012240e8;
          }
          else if (iVar6 != 0) {
            puVar3 = puVar7 + iVar6 * 8;
            do {
              iVar5 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
              if (iVar5 == 0) goto LAB_012240e8;
              puVar7 = puVar7 + 8;
            } while (puVar7 != puVar3);
          }
          goto LAB_01224104;
        }
        puVar7 = *(undefined4 **)(iVar5 + 0x10);
        iVar5 = *(int *)(iVar5 + 0x14) << 5;
        do {
          if (iVar5 == 0) goto LAB_01224104;
          iVar6 = (**(code **)(puVar7[1] + 0x10))(*puVar7,param_3,param_6);
          iVar5 = iVar5 + -0x20;
          puVar7 = puVar7 + 8;
        } while (iVar6 != 0);
      }
    }
LAB_012240e8:
    uVar10 = uVar10 + 1;
    piVar12 = piVar12 + 5;
    if (piVar12 == piVar1) {
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      iVar2 = thunk_FUN_016d4a50(0x21);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x21);
      }
      FUN_016dd1aa(iVar2,"more than one subschema succeeded",0x21);
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(5);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4();
      }
      *(undefined1 *)(puVar3 + 1) = 0x66;
      *puVar3 = &DAT_4f656e6f;
      *param_1 = 1;
      param_1[1] = puVar7;
      param_1[2] = 1;
      param_1[3] = local_68;
      param_1[4] = local_64;
      param_1[5] = local_60;
      param_1[6] = 0;
      *puVar7 = 5;
      puVar7[1] = puVar3;
      puVar7[2] = 5;
      puVar7[3] = 0x21;
      puVar7[4] = iVar2;
      puVar7[5] = 0x21;
      return;
    }
  } while( true );
}

