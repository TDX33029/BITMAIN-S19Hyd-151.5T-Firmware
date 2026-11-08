// FUN_0112a4e0 @ 0112a4e0 size=1140 calls_out=9 calls_in=1
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu | assertion failed: !template.has_been_cleanedhandle_pingevent open/protocols/stratum-proxy/src/translation.rs:1629message_lengthchannel_messageevent open/protocols/stratum-proxy/src/translation.rs:1655handle_notifyreject_shares | BUG: We just checked the queue is at least MAX_SIZE

undefined4 * FUN_0112a4e0(uint *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int local_30;
  undefined2 *local_2c;
  int local_28;
  
  if (*(char *)(param_2 + 6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !template.has_been_cleanedhandle_pingevent open/protocols/stratum-proxy/src/translation.rs:1629message_lengthchannel_messageevent open/protocols/stratum-proxy/src/translation.rs:1655handle_notifyreject_shares"
                 ,0x2c,&DAT_01887790);
  }
  uVar21 = *param_1;
  uVar6 = param_1[3];
  if (param_3 != 0 && uVar6 != 0) {
    uVar23 = param_1[2];
    uVar26 = param_1[1];
    uVar19 = uVar21;
    if (uVar23 < uVar21) {
      uVar19 = 0;
    }
    uVar22 = uVar23 - uVar19;
    iVar13 = uVar6 - (uVar21 - uVar22);
    uVar14 = 0;
    if (uVar6 < uVar21 - uVar22 || iVar13 == 0) {
      uVar17 = uVar22 + uVar6;
    }
    else {
      uVar14 = iVar13 * 0x1c;
      uVar17 = uVar21;
    }
    if (uVar17 != uVar22) {
      iVar13 = ((uVar17 - uVar22) * 0x1c >> 2) * -0x49249249;
      puVar15 = (undefined1 *)(uVar23 * 0x1c + uVar19 * -0x1c + uVar26 + 0x18);
      do {
        *puVar15 = 1;
        iVar13 = iVar13 + -1;
        puVar15 = puVar15 + 0x1c;
      } while (iVar13 != 0);
    }
    if (uVar14 != 0) {
      iVar13 = (uVar14 >> 2) * -0x49249249;
      puVar15 = (undefined1 *)(uVar26 + 0x18);
      do {
        *puVar15 = 1;
        iVar13 = iVar13 + -1;
        puVar15 = puVar15 + 0x1c;
      } while (iVar13 != 0);
    }
  }
  if (uVar6 == uVar21) {
    FUN_0113bc10(param_1);
    uVar21 = *param_1;
    uVar6 = param_1[3];
  }
  uVar23 = param_1[2];
  uVar14 = uVar6 + 1;
  uVar26 = param_1[1];
  uVar6 = uVar23 + uVar6;
  param_1[3] = uVar14;
  uVar19 = uVar6 - uVar21;
  if (uVar6 < uVar21) {
    uVar19 = uVar6;
  }
  puVar7 = (undefined4 *)(uVar26 + uVar19 * 0x1c);
  uVar16 = param_2[1];
  uVar18 = param_2[2];
  *puVar7 = *param_2;
  puVar7[1] = uVar16;
  puVar7[2] = uVar18;
  puVar9 = puVar7 + 3;
  uVar16 = param_2[4];
  uVar18 = param_2[5];
  uVar24 = param_2[6];
  *puVar9 = param_2[3];
  puVar7[4] = uVar16;
  puVar7[5] = uVar18;
  puVar7[6] = uVar24;
  if (0x28 < uVar14) {
    do {
      uVar6 = uVar23 + 1;
      uVar14 = uVar14 - 1;
      piVar8 = (int *)(uVar26 + uVar23 * 0x1c);
      iVar13 = *piVar8;
      uVar23 = uVar6 - uVar21;
      if (uVar6 < uVar21) {
        uVar23 = uVar6;
      }
      param_1[2] = uVar23;
      iVar27 = piVar8[1];
      uVar6 = piVar8[2];
      param_1[3] = uVar14;
      if (iVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: We just checked the queue is at least MAX_SIZE",0x33,&DAT_01887780);
      }
      puVar9 = (undefined4 *)(uint)*(byte *)(piVar8 + 6);
      if ((*(byte *)(piVar8 + 6) & 1) == 0) {
        puVar10 = (undefined2 *)thunk_FUN_016d4a50(0x80);
        if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x80);
        }
        *(undefined1 *)puVar10 = 0x22;
        local_28 = 1;
        local_30 = 0x80;
        iVar25 = iVar27;
        local_2c = puVar10;
        do {
          uVar19 = 0;
          do {
            uVar22 = uVar19;
            if (uVar6 == uVar22) {
              if (uVar6 == 0) {
                iVar20 = local_30;
                if (local_30 == local_28) goto LAB_0112a8d0;
              }
              else {
                if ((uint)(local_30 - local_28) < uVar6) {
                  FUN_01139080(&local_30,local_28,uVar6);
                }
                iVar5 = local_28;
                iVar20 = local_30;
                FUN_016dd1aa((undefined1 *)((int)local_2c + local_28),iVar25,uVar6);
                local_28 = iVar5 + uVar6;
                if (iVar20 == local_28) {
LAB_0112a8d0:
                  FUN_01139080(&local_30,iVar20,1);
                  iVar20 = local_30;
                }
              }
              puVar10 = local_2c;
              *(undefined1 *)((int)local_2c + local_28) = 0x22;
              if (iVar20 == -0x80000000) {
                puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
                if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,3);
                }
                *(undefined1 *)(puVar12 + 1) = 0x41;
                *puVar12 = 0x2f4e;
                FUN_00f3d3b0(puVar10);
              }
              else {
                puVar9 = (undefined4 *)(uint)DAT_018dd947;
                puVar12 = local_2c;
                if (iVar20 == 0) goto LAB_0112a8bc;
              }
              puVar9 = (undefined4 *)thunk_FUN_016d3fb4(puVar12);
              goto LAB_0112a8bc;
            }
            bVar1 = *(byte *)(iVar25 + uVar22);
            bVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
            uVar19 = uVar22 + 1;
          } while (bVar2 == 0);
          if (uVar22 != 0) {
            if ((uint)(local_30 - local_28) < uVar22) {
              FUN_01139080(&local_30,local_28,uVar22);
              puVar10 = local_2c;
            }
            iVar20 = local_28;
            FUN_016dd1aa((undefined1 *)((int)puVar10 + local_28),iVar25,uVar22);
            local_28 = iVar20 + uVar22;
          }
          uVar6 = uVar6 + ~uVar22;
          iVar25 = iVar25 + uVar22 + 1;
          if (bVar2 == 0x75) {
            uVar3 = (&DAT_00563e90)[bVar1 & 0xf];
            uVar4 = (&DAT_00563e90)[bVar1 >> 4];
            if ((uint)(local_30 - local_28) < 6) {
              FUN_01139080(&local_30,local_28,6);
            }
            puVar7 = (undefined4 *)((int)local_2c + local_28);
            *puVar7 = 0x3030755c;
            local_28 = local_28 + 6;
            *(undefined1 *)((int)puVar7 + 5) = uVar3;
            *(undefined1 *)(puVar7 + 1) = uVar4;
            puVar10 = local_2c;
          }
          else {
            if ((uint)(local_30 - local_28) < 2) {
              FUN_01139080(&local_30,local_28,2);
              puVar10 = local_2c;
            }
            puVar11 = (ushort *)((int)puVar10 + local_28);
            local_28 = local_28 + 2;
            *puVar11 = (ushort)bVar2 << 8 | 0x5c;
          }
        } while( true );
      }
LAB_0112a8bc:
      if (iVar13 != 0) {
        puVar9 = (undefined4 *)thunk_FUN_016d3fb4(iVar27);
      }
    } while (0x28 < uVar14);
  }
  return puVar9;
}

