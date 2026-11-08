// FUN_013ce51c @ 013ce51c size=812 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_013ce51c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  ushort local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort *local_30;
  ushort **local_2c;
  int local_28;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = *(int *)(param_1 + 4);
    iVar18 = *(int *)(param_1 + 8) * 0x4c + iVar12;
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar15 = *(int *)(param_1 + 0x14);
    iVar19 = *(int *)(param_1 + 0x28);
    iVar13 = iVar9 * 0xe8 + iVar19;
    iVar17 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0x20) * 0xe8 + iVar4;
    iVar14 = *(int *)(param_1 + 0x20) * 0xe8;
    iVar6 = iVar15 * 0xe8 + iVar17;
    iVar10 = iVar9 * 0xe8;
    do {
      uVar1 = *(ushort *)(iVar12 + 0x48);
      if (uVar1 == 0x1d) {
        local_4c = 1;
        iVar11 = iVar15 * 0xe8;
        iVar16 = iVar17;
        local_48 = iVar17;
        local_44 = iVar6;
        local_40 = iVar4;
        local_3c = iVar5;
        local_38 = iVar19;
        local_34 = iVar13;
        local_2c = &local_30;
        local_28 = iVar12;
        while (iVar11 != 0) {
          iVar7 = FUN_013cda84(&local_2c,iVar16);
          iVar11 = iVar11 + -0xe8;
          iVar16 = iVar16 + 0xe8;
          if (iVar7 != 0) {
            return 1;
          }
        }
        iVar11 = iVar14;
        iVar16 = iVar4;
        while (iVar11 != 0) {
          iVar7 = FUN_013cda84(&local_2c,iVar16);
          iVar11 = iVar11 + -0xe8;
          iVar16 = iVar16 + 0xe8;
          if (iVar7 != 0) {
            return 1;
          }
        }
        if (iVar9 != 0) {
          iVar11 = iVar10;
          iVar16 = iVar19;
          do {
            sVar3 = FUN_013c7920(iVar16 + 0x48);
            if ((sVar3 == 0x1d) && (iVar7 = FUN_013c9530(iVar16,iVar12), iVar7 != 0)) {
              return 1;
            }
            iVar16 = iVar16 + 0xe8;
            iVar11 = iVar11 + -0xe8;
          } while (iVar11 != 0);
        }
      }
      else {
        iVar11 = iVar15 * 0xe8;
        iVar16 = iVar17;
        if (uVar1 == 3) {
          while (iVar11 != 0) {
            iVar7 = FUN_013cad2c(iVar16,iVar12);
            iVar11 = iVar11 + -0xe8;
            iVar16 = iVar16 + 0xe8;
            if (iVar7 != 0) {
              return 1;
            }
          }
          iVar11 = iVar14;
          iVar16 = iVar4;
          while (iVar11 != 0) {
            iVar7 = FUN_013cad2c(iVar16,iVar12);
            iVar11 = iVar11 + -0xe8;
            iVar16 = iVar16 + 0xe8;
            if (iVar7 != 0) {
              return 1;
            }
          }
          iVar11 = iVar10;
          iVar16 = iVar19;
          while (iVar11 != 0) {
            iVar7 = FUN_013cad2c(iVar16,iVar12);
            iVar11 = iVar11 + -0xe8;
            iVar16 = iVar16 + 0xe8;
            if (iVar7 != 0) {
              return 1;
            }
          }
        }
        else {
          local_4e = *(undefined2 *)(iVar12 + 0x4a);
          if (iVar15 != 0) {
            return 1;
          }
          local_30 = &local_50;
          local_4c = 1;
          iVar11 = iVar14;
          iVar16 = iVar4;
          local_50 = uVar1;
          local_48 = iVar17;
          local_44 = iVar6;
          local_40 = iVar4;
          local_3c = iVar5;
          local_38 = iVar19;
          local_34 = iVar13;
          local_2c = &local_30;
          local_28 = iVar12;
          while (puVar2 = local_30, iVar11 != 0) {
            iVar7 = FUN_013cdabc(&local_2c,iVar16);
            iVar11 = iVar11 + -0xe8;
            iVar16 = iVar16 + 0xe8;
            if (iVar7 != 0) {
              return 1;
            }
          }
          if (iVar9 != 0) {
            iVar11 = iVar19;
            iVar16 = iVar10;
            do {
              uVar20 = FUN_013c7920(iVar11 + 0x48);
              uVar8 = (uint)uVar20 & 0xffff;
              if ((uVar8 == *puVar2) &&
                 (((uVar8 != 0x24 ||
                   (((uint)((ulonglong)uVar20 >> 0x20) & 0xffff) == (uint)puVar2[1])) &&
                  (iVar7 = FUN_013cad2c(iVar11,iVar12), iVar7 != 0)))) {
                return 1;
              }
              iVar11 = iVar11 + 0xe8;
              iVar16 = iVar16 + -0xe8;
            } while (iVar16 != 0);
          }
        }
      }
      iVar12 = iVar12 + 0x4c;
    } while (iVar12 != iVar18);
  }
  return 0;
}

