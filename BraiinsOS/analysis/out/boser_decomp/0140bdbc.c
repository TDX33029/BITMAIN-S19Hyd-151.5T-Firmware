// FUN_0140bdbc @ 0140bdbc size=928 calls_out=13 calls_in=1
// strings: 

void FUN_0140bdbc(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint *puVar17;
  int *piVar18;
  int local_58;
  undefined1 *local_54;
  int *local_50;
  int *local_4c;
  uint local_48;
  undefined1 *local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  uint *local_30;
  uint local_28;
  
  DataMemoryBarrier(0xb);
  if (2 < *(uint *)param_1[4]) {
    return;
  }
  piVar16 = (int *)param_1[2];
  uVar13 = *param_1;
  uVar9 = piVar16[7] & 0x3f;
  uVar14 = uVar13 >> uVar9 | param_1[1] << (0x20 - uVar9 & 0xff);
  if (-1 < (int)(uVar9 - 0x20)) {
    uVar14 = param_1[1] >> (uVar9 - 0x20 & 0xff);
  }
  uVar9 = 0;
  if (piVar16[7] != 0x40) {
    uVar9 = uVar14;
  }
  if ((uint)piVar16[1] <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,piVar16[1],&DAT_01cf3dd8);
  }
  iVar10 = *piVar16;
  iVar4 = FUN_013f0d78();
  iVar10 = iVar10 + uVar9 * 8;
  local_58 = iVar4;
  puVar5 = (undefined4 *)FUN_0140b398(iVar10);
  uVar14 = param_1[3];
  piVar8 = (int *)(iVar10 + 4);
  puVar15 = puVar5;
  do {
    piVar11 = (int *)puVar15[1];
    uVar9 = (int)piVar11 - 1;
    if (((uint)piVar11 ^ uVar9) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
    }
    piVar18 = puVar15 + 5;
    cVar3 = FUN_0160a118((uint)piVar11 >> 1,piVar18,piVar8);
    if (cVar3 == '\x03') {
      local_38 = 1;
      local_3c = 0;
      local_4c = &local_58;
      local_48 = uVar9 & uVar13;
      local_54 = (undefined1 *)*puVar15;
      local_44 = local_54 + local_48 * 4;
      local_50 = piVar11;
      local_40 = local_48;
      while( true ) {
        FUN_013f4d28(&local_34,&local_54);
        uVar9 = local_28;
        puVar2 = local_30;
        if (local_34 != 1) goto LAB_0140c004;
        if (local_30 == (uint *)0x0) break;
        puVar17 = (uint *)(local_28 & 0xfffffff8);
        if (puVar17 == (uint *)0x0) goto LAB_0140c004;
        uVar12 = *puVar17;
        if ((uVar12 == uVar14) ||
           (((((iVar6 = FUN_013cad2c(uVar12 + 8,uVar14 + 8), iVar6 != 0 &&
               (*(short *)(uVar12 + 0x50) == *(short *)(uVar14 + 0x50))) &&
              ((*(short *)(uVar12 + 0x50) != 0x24 ||
               (*(short *)(uVar12 + 0x52) == *(short *)(uVar14 + 0x52))))) &&
             ((uint)*(ushort *)(uVar12 + 0x4c) == (uint)*(ushort *)(uVar14 + 0x4c))) &&
            ((1 < *(ushort *)(uVar12 + 0x4c) - 5 ||
             (*(short *)(uVar12 + 0x4e) == *(short *)(uVar14 + 0x4e))))))) {
          if (((uVar9 & 2) != 0) || (DataMemoryBarrier(0xb), 2 < *(uint *)puVar17[1])) {
LAB_0140c004:
            piVar16 = (int *)0x0;
            goto LAB_0140c00c;
          }
          if (*puVar2 == uVar9) {
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(puVar2);
            if (bVar1) {
              *puVar2 = (uint)puVar17 | 2;
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar1);
              *piVar8 = *piVar8 + -1;
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar1);
              *piVar18 = *piVar18 + 1;
              piVar16 = piVar16 + 6;
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar16);
              } while (!bVar1);
              *piVar16 = *piVar16 + -1;
              piVar16 = (int *)puVar17[1];
              do {
                iVar6 = *piVar16;
                bVar1 = (bool)hasExclusiveAccess(piVar16);
              } while (!bVar1);
              *piVar16 = iVar6 + 1;
              if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0197a954();
              }
              DataMemoryBarrier(0xb);
              piVar8 = (int *)puVar17[1];
              if (iVar4 == 0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar6 = *piVar8;
                  bVar1 = (bool)hasExclusiveAccess(piVar8);
                } while (!bVar1);
                *piVar8 = iVar6 + -1;
                if (iVar6 == 1) {
                  DataMemoryBarrier(0xb);
                  thunk_FUN_01be4678();
                }
              }
              else {
                local_54 = &LAB_01406ba0;
                local_50 = piVar8;
                FUN_01319ffc(iVar4,&local_54);
              }
LAB_0140c00c:
              FUN_0140b280(iVar10,iVar4,puVar5,puVar15);
              FUN_013f0f2c(iVar4);
              if (piVar16 == (int *)0x0) {
                return;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar16;
                bVar1 = (bool)hasExclusiveAccess(piVar16);
              } while (!bVar1);
              *piVar16 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                thunk_FUN_01be4678(piVar16);
                return;
              }
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          local_38 = 1;
        }
      }
      cVar3 = '\0';
    }
    puVar7 = (undefined4 *)
             FUN_013f653c(puVar15,&local_58,piVar16[2],piVar16[3],piVar16[4],piVar16[5],cVar3);
    if (puVar7 != (undefined4 *)0x0) {
      puVar15 = puVar7;
    }
  } while( true );
}

