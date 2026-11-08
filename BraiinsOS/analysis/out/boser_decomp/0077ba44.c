// FUN_0077ba44 @ 0077ba44 size=956 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0077ba44(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  int *piVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  int *piVar43;
  int *piVar44;
  int *piVar45;
  undefined4 *puVar46;
  undefined4 *extraout_r12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0078bd94(&local_68);
  local_50 = *(int **)(param_2 + 0x18);
  do {
    iVar34 = *local_50;
    bVar13 = (bool)hasExclusiveAccess(local_50);
  } while (!bVar13);
  *local_50 = iVar34 + 1;
  if (-1 < iVar34) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = local_58;
    uStack_34 = uStack_54;
    local_4c = *(int **)(param_2 + 0x1c);
    do {
      iVar34 = *local_4c;
      bVar13 = (bool)hasExclusiveAccess(local_4c);
    } while (!bVar13);
    *local_4c = iVar34 + 1;
    if (-1 < iVar34) {
      piVar43 = *(int **)(param_2 + 0xa0);
      do {
        iVar34 = *piVar43;
        bVar13 = (bool)hasExclusiveAccess(piVar43);
      } while (!bVar13);
      *piVar43 = iVar34 + 1;
      if (-1 < iVar34) {
        piVar45 = *(int **)(param_2 + 0xa8);
        uVar14 = *(undefined4 *)(param_2 + 0xa4);
        do {
          iVar34 = *piVar45;
          bVar13 = (bool)hasExclusiveAccess(piVar45);
        } while (!bVar13);
        *piVar45 = iVar34 + 1;
        if (-1 < iVar34) {
          uVar15 = *(undefined4 *)(param_2 + 0xac);
          uVar16 = *(undefined4 *)(param_2 + 0x20);
          uVar28 = *(undefined4 *)(param_2 + 0x24);
          uVar17 = *(undefined4 *)(param_2 + 0x30);
          uVar29 = *(undefined4 *)(param_2 + 0x34);
          uVar18 = *(undefined4 *)(param_2 + 0x60);
          uVar30 = *(undefined4 *)(param_2 + 100);
          uVar19 = *(undefined4 *)(param_2 + 0x50);
          uVar31 = *(undefined4 *)(param_2 + 0x54);
          uVar20 = *(undefined4 *)(param_2 + 0x40);
          uVar32 = *(undefined4 *)(param_2 + 0x44);
          uVar21 = *(undefined4 *)(param_2 + 0x28);
          uVar22 = *(undefined4 *)(param_2 + 0x38);
          uVar23 = *(undefined4 *)(param_2 + 0x48);
          uVar24 = *(undefined4 *)(param_2 + 0x58);
          uVar1 = *(undefined1 *)(param_2 + 0x99);
          uVar2 = *(undefined1 *)(param_2 + 0x98);
          uVar3 = *(undefined1 *)(param_2 + 0x9a);
          uVar4 = *(undefined1 *)(param_2 + 0x92);
          uVar5 = *(undefined1 *)(param_2 + 0x91);
          piVar44 = *(int **)(param_2 + 0x7c);
          bVar6 = *(byte *)(param_2 + 0x95);
          puVar46 = (undefined4 *)(uint)bVar6;
          uVar7 = *(undefined1 *)(param_2 + 0x94);
          bVar8 = *(byte *)(param_2 + 0x93);
          uVar41 = *(undefined4 *)(param_2 + 0x8c);
          uVar36 = *(undefined4 *)(param_2 + 0x68);
          uVar39 = *(undefined4 *)(param_2 + 0x88);
          uVar37 = *(undefined4 *)(param_2 + 0x84);
          uVar9 = *(undefined1 *)(param_2 + 0x90);
          uVar25 = *(undefined4 *)(param_2 + 0x80);
          do {
            iVar34 = *piVar44;
            bVar13 = (bool)hasExclusiveAccess(piVar44);
          } while (!bVar13);
          *piVar44 = iVar34 + 1;
          if (-1 < iVar34) {
            uVar10 = *(undefined1 *)(param_2 + 0x96);
            uVar11 = *(undefined1 *)(param_2 + 0x97);
            if (*(int *)(param_2 + 0x70) == -0x80000000) {
              local_30 = 0x80000000;
            }
            else {
              FUN_015e8ad4(&local_30,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78)
                          );
              puVar46 = extraout_r12;
            }
            puVar26 = (undefined4 *)((uint)&local_48 | 4);
            *puVar26 = local_30;
            puVar26[1] = uStack_2c;
            puVar26[2] = uStack_28;
            piVar27 = *(int **)(param_2 + 0xb0);
            do {
              iVar34 = *piVar27;
              bVar13 = (bool)hasExclusiveAccess(piVar27);
            } while (!bVar13);
            *piVar27 = iVar34 + 1;
            if (-1 < iVar34) {
              puVar33 = *(uint **)(param_2 + 0xb4);
              do {
                uVar35 = *puVar33;
                bVar13 = (bool)hasExclusiveAccess(puVar33);
              } while (!bVar13);
              *puVar33 = uVar35 + 1;
              puVar26 = (undefined4 *)(uint)bVar8;
              if (uVar35 < 0x80000000) {
                puVar46 = param_1;
                puVar26 = &local_48;
              }
              if (-1 < (int)uVar35) {
                uVar38 = puVar26[1];
                uVar40 = puVar26[2];
                uVar42 = puVar26[3];
                puVar46[0x1b] = *puVar26;
                puVar46[0x1c] = uVar38;
                puVar46[0x1d] = uVar40;
                puVar46[0x1e] = uVar42;
                uVar38 = *(undefined4 *)(param_2 + 0xb8);
                uVar12 = *(undefined1 *)(param_2 + 0xc0);
                *puVar46 = local_68;
                puVar46[1] = uStack_64;
                puVar46[2] = uStack_60;
                puVar46[3] = uStack_5c;
                puVar46[4] = local_58;
                puVar46[5] = uStack_54;
                puVar46[6] = local_50;
                puVar46[7] = local_4c;
                puVar46[0x2c] = piVar27;
                puVar46[0x2e] = uVar38;
                *(undefined1 *)((int)puVar46 + 0x9a) = uVar3;
                *(undefined1 *)((int)puVar46 + 0x99) = uVar1;
                *(undefined1 *)(puVar46 + 0x26) = uVar2;
                *(undefined1 *)((int)puVar46 + 0x97) = uVar11;
                *(undefined1 *)((int)puVar46 + 0x96) = uVar10;
                param_1[8] = uVar16;
                param_1[9] = uVar28;
                *(byte *)((int)puVar46 + 0x95) = bVar6;
                param_1[0xc] = uVar17;
                param_1[0xd] = uVar29;
                *(undefined1 *)(puVar46 + 0x25) = uVar7;
                param_1[0x10] = uVar20;
                param_1[0x11] = uVar32;
                *(byte *)((int)puVar46 + 0x93) = bVar8;
                param_1[0x14] = uVar19;
                param_1[0x15] = uVar31;
                *(undefined1 *)((int)puVar46 + 0x92) = uVar4;
                param_1[0x18] = uVar18;
                param_1[0x19] = uVar30;
                *(undefined1 *)((int)puVar46 + 0x91) = uVar5;
                puVar46[10] = uVar21;
                *(undefined1 *)(puVar46 + 0x24) = uVar9;
                puVar46[0xe] = uVar22;
                puVar46[0x20] = uVar25;
                puVar46[0x12] = uVar23;
                puVar46[0x21] = uVar37;
                puVar46[0x16] = uVar24;
                puVar46[0x22] = uVar39;
                puVar46[0x29] = uVar14;
                puVar46[0x23] = uVar41;
                *(undefined1 *)(puVar46 + 0x30) = uVar12;
                puVar46[0x28] = piVar43;
                puVar46[0x2a] = piVar45;
                puVar46[0x2b] = uVar15;
                puVar46[0x2d] = puVar33;
                puVar46[0x1f] = piVar44;
                puVar46[0x1a] = uVar36;
                return;
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0x77bdfc);
  return;
}

