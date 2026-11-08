// FUN_0126d010 @ 0126d010 size=1308 calls_out=9 calls_in=2
// strings: assertion failed: edge.height == self.node.height - 1 | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0126d010(int *param_1,int *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  uint local_40;
  
  iVar20 = *param_2;
  if (iVar20 == 0) {
    piVar19 = (int *)param_2[3];
    iVar6 = FUN_006c8e68();
    iVar21 = 0;
    *(undefined2 *)(iVar6 + 0x5e) = 0;
    *(undefined4 *)(iVar6 + 0x58) = 0;
    *piVar19 = iVar6;
    piVar19[1] = 0;
    local_40 = (uint)*(ushort *)(iVar6 + 0x5e);
    if (10 < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                   &DAT_01d305b8);
    }
    *(ushort *)(iVar6 + 0x5e) = *(ushort *)(iVar6 + 0x5e) + 1;
    iVar20 = param_2[5];
    piVar5 = (int *)(iVar6 + local_40 * 8);
    *piVar5 = param_2[4];
    *(char *)(piVar5 + 1) = (char)iVar20;
  }
  else {
    uVar2 = *(ushort *)(iVar20 + 0x5e);
    uVar15 = (uint)uVar2;
    piVar19 = (int *)param_2[3];
    iVar17 = param_2[4];
    iVar11 = param_2[5];
    iVar6 = iVar20;
    if (uVar15 < 0xb) {
      local_40 = param_2[2];
      if (local_40 + 1 <= uVar15) {
        FUN_01bed864(iVar20 + (local_40 + 1) * 8,iVar20 + local_40 * 8,(uVar15 - local_40) * 8);
      }
      *(ushort *)(iVar20 + 0x5e) = uVar2 + 1;
      piVar5 = (int *)(iVar20 + local_40 * 8);
      *piVar5 = iVar17;
      iVar21 = param_2[1];
      *(char *)(piVar5 + 1) = (char)iVar11;
    }
    else {
      local_40 = param_2[2];
      uVar15 = 4;
      if (local_40 < 5) {
        bVar4 = false;
      }
      else if (local_40 == 5) {
        bVar4 = false;
        uVar15 = 5;
      }
      else {
        if (local_40 == 6) {
          uVar15 = 5;
          local_40 = 0;
        }
        else {
          local_40 = local_40 - 7;
          uVar15 = 6;
        }
        bVar4 = true;
      }
      iVar18 = param_2[1];
      iVar7 = FUN_006c8e68();
      *(undefined4 *)(iVar7 + 0x58) = 0;
      uVar10 = ~uVar15 + (uint)*(ushort *)(iVar20 + 0x5e);
      *(short *)(iVar7 + 0x5e) = (short)uVar10;
      if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
      }
      puVar8 = (undefined4 *)(iVar20 + uVar15 * 8);
      uVar13 = *puVar8;
      uVar16 = *(undefined1 *)(puVar8 + 1);
      FUN_01bed4e2(iVar7,puVar8 + 2,uVar10 * 8);
      *(short *)(iVar20 + 0x5e) = (short)uVar15;
      iVar21 = iVar18;
      if (bVar4) {
        iVar21 = 0;
        iVar6 = iVar7;
      }
      uVar2 = *(ushort *)(iVar6 + 0x5e);
      if (local_40 + 1 <= (uint)uVar2) {
        FUN_01bed864(iVar6 + (local_40 + 1) * 8,iVar6 + local_40 * 8,(uVar2 - local_40) * 8);
      }
      *(ushort *)(iVar6 + 0x5e) = uVar2 + 1;
      piVar5 = (int *)(iVar6 + local_40 * 8);
      *piVar5 = iVar17;
      *(char *)(piVar5 + 1) = (char)iVar11;
      if (*(int *)(iVar20 + 0x58) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 0;
        iVar17 = *(int *)(iVar20 + 0x58);
        uVar14 = uVar13;
        iVar22 = iVar7;
        uVar1 = uVar16;
        do {
          iVar9 = iVar17;
          if (iVar11 != iVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,&DAT_01d2ff30)
            ;
          }
          uVar2 = *(ushort *)(iVar9 + 0x5e);
          uVar15 = (uint)*(ushort *)(iVar20 + 0x5c);
          if (uVar2 < 0xb) {
            FUN_0125fd70(iVar9,uVar15,uVar14,uVar1,iVar22);
            goto LAB_0126d44c;
          }
          bVar4 = false;
          uVar10 = 4;
          if (4 < uVar15) {
            if (uVar15 == 5) {
              uVar10 = 5;
            }
            else if (uVar15 == 6) {
              bVar4 = true;
              uVar15 = 0;
              uVar10 = 5;
            }
            else {
              uVar15 = uVar15 - 7;
              bVar4 = true;
              uVar10 = 6;
            }
          }
          iVar7 = FUN_01264dc8();
          *(undefined2 *)(iVar7 + 0x5e) = 0;
          *(undefined4 *)(iVar7 + 0x58) = 0;
          uVar12 = ~uVar10 + (uint)*(ushort *)(iVar9 + 0x5e);
          *(short *)(iVar7 + 0x5e) = (short)uVar12;
          if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar12,0xb,&DAT_01d2ff10);
          }
          puVar8 = (undefined4 *)(iVar9 + uVar10 * 8);
          uVar13 = *puVar8;
          uVar16 = *(undefined1 *)(puVar8 + 1);
          FUN_01bed4e2(iVar7,puVar8 + 2,uVar12 * 8);
          *(short *)(iVar9 + 0x5e) = (short)uVar10;
          uVar12 = (uint)*(ushort *)(iVar7 + 0x5e);
          iVar20 = uVar12 + 1;
          if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar20,0xc,&DAT_01d2ff20);
          }
          if (uVar2 - uVar10 != iVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          iVar11 = iVar18 + 1;
          FUN_01bed4e2(iVar7 + 0x60,iVar9 + uVar10 * 4 + 100,iVar20 * 4);
          uVar10 = 0;
          do {
            iVar20 = *(int *)(iVar7 + 0x60 + uVar10 * 4);
            *(short *)(iVar20 + 0x5c) = (short)uVar10;
            *(int *)(iVar20 + 0x58) = iVar7;
            if (uVar12 <= uVar10) break;
            uVar10 = uVar10 + 1;
          } while (uVar10 <= uVar12);
          iVar20 = iVar7;
          if (!bVar4) {
            iVar20 = iVar9;
          }
          FUN_0125fd70(iVar20,uVar15,uVar14,uVar1,iVar22);
          iVar17 = *(int *)(iVar9 + 0x58);
          uVar14 = uVar13;
          iVar18 = iVar11;
          iVar20 = iVar9;
          iVar22 = iVar7;
          uVar1 = uVar16;
        } while (*(int *)(iVar9 + 0x58) != 0);
      }
      if (*piVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar23 = FUN_0125fd10(*piVar19,piVar19[1]);
      iVar20 = (int)uVar23;
      *(undefined8 *)piVar19 = uVar23;
      if (iVar11 != (int)((ulonglong)uVar23 >> 0x20) + -1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      uVar15 = (uint)*(ushort *)(iVar20 + 0x5e);
      if (10 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                     &DAT_01d305d8);
      }
      uVar3 = (undefined2)(uVar15 + 1);
      *(undefined2 *)(iVar20 + 0x5e) = uVar3;
      puVar8 = (undefined4 *)(iVar20 + uVar15 * 8);
      *puVar8 = uVar13;
      *(undefined1 *)(puVar8 + 1) = uVar16;
      *(int *)(iVar20 + (uVar15 + 1) * 4 + 0x60) = iVar7;
      *(undefined2 *)(iVar7 + 0x5c) = uVar3;
      *(int *)(iVar7 + 0x58) = iVar20;
    }
  }
LAB_0126d44c:
  iVar20 = piVar19[2];
  *param_1 = iVar6;
  param_1[1] = iVar21;
  param_1[2] = local_40;
  param_1[3] = (int)piVar19;
  piVar19[2] = iVar20 + 1;
  return;
}

