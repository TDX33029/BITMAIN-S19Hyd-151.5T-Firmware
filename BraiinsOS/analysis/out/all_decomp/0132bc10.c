// FUN_0132bc10 @ 0132bc10 size=1508 calls_out=4 calls_in=2
// strings: 

void FUN_0132bc10(undefined4 param_1,int param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  code *pcVar17;
  undefined4 uVar18;
  byte bVar19;
  undefined8 uVar20;
  byte local_71;
  byte local_70 [4];
  undefined4 local_6c;
  int local_68;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined1 local_49;
  undefined1 auStack_48 [16];
  byte local_38 [20];
  
  iVar2 = (**(code **)(param_2 + 0x20))();
  iVar13 = *(int *)(iVar2 + 0x7c);
  local_71 = 1;
  if (*(int *)(iVar2 + 0x80) != 0) {
    iVar2 = iVar13 + *(int *)(iVar2 + 0x80) * 0x20;
    uVar3 = param_4 & param_5 != 0;
    puVar4 = (undefined4 *)((uint)local_38 | 1);
    puVar5 = (undefined4 *)((uint)local_70 | 1);
    do {
      (**(code **)(*(int *)(iVar13 + 0x1c) + 0x40))
                (local_70,*(undefined4 *)(iVar13 + 0x18),param_1,param_2);
      uVar6 = (uint)local_70[0];
      iVar9 = uVar6 - 0xb;
      if (uVar6 < 0xb || iVar9 == 0) {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        if (uVar6 != 0xb) {
          iVar9 = *(int *)(iVar13 + 0xc);
          local_38[0] = local_70[0];
          uVar18 = *puVar5;
          uVar14 = puVar5[2];
          uVar15 = *(undefined4 *)((int)puVar5 + 0xb);
          if (*(char *)(iVar9 + 0x1c) == '\x01') {
            uVar7 = *(undefined4 *)(iVar9 + 0x14);
            uVar10 = *(undefined4 *)(iVar9 + 0x18);
          }
          else {
            uVar7 = 1;
            uVar10 = 0;
          }
          puVar4[1] = puVar5[1];
          puVar4[2] = uVar14;
          *puVar4 = uVar18;
          *(undefined4 *)((int)puVar4 + 0xb) = uVar15;
          FUN_0132c264(param_3,param_4,param_5,&local_71,uVar7,uVar10,local_38);
        }
      }
      else {
        if (iVar9 == 1) {
          uVar20 = (**(code **)(local_68 + 0xc))(local_6c);
          puVar11 = (undefined4 *)((ulonglong)uVar20 >> 0x20);
          uVar15 = (undefined4)uVar20;
          pcVar17 = (code *)puVar11[3];
          while( true ) {
            uVar20 = (*pcVar17)(uVar15);
            if ((int)uVar20 == 0) break;
            iVar9 = *(int *)(iVar13 + 0xc);
            if (*(char *)(iVar9 + 0x1c) == '\0') {
              uVar14 = 1;
              uVar18 = 0;
            }
            else {
              uVar14 = *(undefined4 *)(iVar9 + 0x14);
              uVar18 = *(undefined4 *)(iVar9 + 0x18);
            }
            (**(code **)((int)((ulonglong)uVar20 >> 0x20) + 0x10))(auStack_48,(int)uVar20);
            FUN_0132c264(param_3,param_4,param_5,&local_71,uVar14,uVar18,auStack_48);
          }
          if ((code *)*puVar11 != (code *)0x0) {
            (*(code *)*puVar11)(uVar15);
          }
          iVar9 = puVar11[1];
        }
        else {
          uVar20 = (**(code **)(local_68 + 0xc))(local_6c);
          puVar11 = (undefined4 *)((ulonglong)uVar20 >> 0x20);
          uVar15 = (undefined4)uVar20;
          pcVar17 = (code *)puVar11[3];
          bVar19 = local_71;
          while ((*pcVar17)(&local_5c,uVar15), iVar1 = local_50, uVar14 = local_54,
                iVar16 = local_58, iVar9 = local_5c, local_5c != 0) {
            iVar8 = *(int *)(iVar13 + 0xc);
            iVar12 = param_3[2];
            if (*(char *)(iVar8 + 0x1c) == '\0') {
              uVar18 = 1;
              uVar6 = 0;
            }
            else {
              uVar18 = *(undefined4 *)(iVar8 + 0x14);
              uVar6 = *(uint *)(iVar8 + 0x18);
            }
            if (param_4 == 0 && (bVar19 & 1) == 0) {
              if (*param_3 == iVar12) {
                FUN_0132f8cc(param_3,iVar12,1,1,1);
                iVar12 = param_3[2];
              }
              *(undefined1 *)(param_3[1] + iVar12) = 0x20;
              iVar12 = param_3[2] + 1;
              param_3[2] = iVar12;
            }
            if (uVar3 != 0) {
              iVar8 = param_5;
              do {
                if ((uint)(*param_3 - iVar12) < 2) {
                  FUN_0132f8cc(param_3,iVar12,2,1,1);
                  iVar12 = param_3[2];
                }
                iVar8 = iVar8 + -1;
                *(undefined2 *)(param_3[1] + iVar12) = 0x2020;
                iVar12 = param_3[2] + 2;
                param_3[2] = iVar12;
              } while (iVar8 != 0);
            }
            if ((uint)(*param_3 - iVar12) < uVar6) {
              FUN_0132f8cc(param_3,iVar12,uVar6,1,1);
              iVar12 = param_3[2];
            }
            FUN_016dd1aa(param_3[1] + iVar12,uVar18,uVar6);
            iVar8 = param_3[2] + uVar6;
            param_3[2] = iVar8;
            if ((uint)(*param_3 - iVar8) < 2) {
              FUN_0132f8cc(param_3,iVar8,2,1,1);
              iVar8 = param_3[2];
            }
            *(undefined2 *)(param_3[1] + iVar8) = 0x7b20;
            iVar8 = param_3[2] + 2;
            param_3[2] = iVar8;
            if (param_4 != 0) {
              if (*param_3 == iVar8) {
                FUN_0132f8cc(param_3,iVar8,1,1,1);
                iVar8 = param_3[2];
              }
              *(undefined1 *)(param_3[1] + iVar8) = 10;
              param_3[2] = param_3[2] + 1;
            }
            local_49 = 1;
            (**(code **)(iVar16 + 0x10))(auStack_48,iVar9);
            FUN_0132c264(param_3,param_4,param_5 + 1,&local_49,&DAT_004145fc,3,auStack_48);
            (**(code **)(iVar1 + 0x10))(auStack_48,uVar14);
            FUN_0132c264(param_3,param_4,param_5 + 1,&local_49,&DAT_00414725,5,auStack_48);
            iVar9 = param_3[2];
            if (uVar3 != 0) {
              iVar16 = param_5;
              do {
                if ((uint)(*param_3 - iVar9) < 2) {
                  FUN_0132f8cc(param_3,iVar9,2,1,1);
                  iVar9 = param_3[2];
                }
                iVar16 = iVar16 + -1;
                *(undefined2 *)(param_3[1] + iVar9) = 0x2020;
                iVar9 = param_3[2] + 2;
                param_3[2] = iVar9;
              } while (iVar16 != 0);
            }
            if (*param_3 == iVar9) {
              FUN_0132f8cc(param_3,iVar9,1,1,1);
              iVar9 = param_3[2];
            }
            *(undefined1 *)(param_3[1] + iVar9) = 0x7d;
            iVar9 = param_3[2] + 1;
            param_3[2] = iVar9;
            if (param_4 != 0) {
              if (*param_3 == iVar9) {
                FUN_0132f8cc(param_3,iVar9,1,1,1);
                iVar9 = param_3[2];
              }
              *(undefined1 *)(param_3[1] + iVar9) = 10;
              param_3[2] = param_3[2] + 1;
            }
            bVar19 = 0;
          }
          local_71 = bVar19;
          if ((code *)*puVar11 != (code *)0x0) {
            (*(code *)*puVar11)(uVar15);
          }
          iVar9 = puVar11[1];
        }
        if (iVar9 != 0) {
          thunk_FUN_016d3fb4(uVar15);
        }
      }
      iVar13 = iVar13 + 0x20;
    } while (iVar13 != iVar2);
  }
  return;
}

