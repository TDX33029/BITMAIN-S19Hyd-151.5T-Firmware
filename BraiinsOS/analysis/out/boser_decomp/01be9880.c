// FUN_01be9880 @ 01be9880 size=628 calls_out=12 calls_in=1
// strings: /etc/resolv.conf | ndots: | attempts: | timeout: | domain | options

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01be9880(int param_1,undefined1 *param_2,uint param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte *local_2bc;
  undefined1 auStack_2b8 [144];
  undefined1 auStack_228 [6];
  byte local_222;
  byte local_221 [3];
  byte local_21e;
  byte local_21d [245];
  undefined1 auStack_128 [260];
  
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x60) = 5;
  *(undefined4 *)(param_1 + 0x58) = 2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  piVar2 = (int *)FUN_01beadbc("/etc/resolv.conf",auStack_2b8,auStack_128,0x100);
  if (piVar2 == (int *)0x0) {
    puVar3 = (uint *)FUN_01be3244();
    if ((0x14 < *puVar3) || (-1 < (int)((0x102004U >> (*puVar3 & 0xff)) << 0x1f))) {
      return 0xffffffff;
    }
  }
  else {
    iVar7 = 0;
LAB_01be9a10:
    iVar4 = FUN_01beb2c0(auStack_228,0x100,piVar2);
    if (iVar4 != 0) {
      iVar4 = FUN_01bedada(auStack_228,10);
      if ((iVar4 != 0) || (*piVar2 << 0x1b < 0)) {
        iVar4 = FUN_01bedc16(auStack_228,"options",7);
        if (iVar4 == 0) {
          uVar6 = (uint)local_221[0];
          bVar8 = 0x1f < uVar6;
          if (uVar6 != 0x20) {
            bVar8 = 3 < uVar6 - 9;
          }
          if (!bVar8 || (uVar6 == 0x20 || uVar6 - 9 == 4)) {
            iVar4 = FUN_01bede5e(auStack_228,"ndots:");
            if (((iVar4 != 0) && (*(byte *)(iVar4 + 6) - 0x30 < 10)) &&
               (uVar6 = FUN_01bed452((byte *)(iVar4 + 6),&local_2bc,10),
               local_2bc != (byte *)(iVar4 + 6))) {
              if (0xe < uVar6) {
                uVar6 = 0xf;
              }
              *(uint *)(param_1 + 0x5c) = uVar6;
            }
            iVar4 = FUN_01bede5e(auStack_228,"attempts:");
            if (((iVar4 != 0) && (*(byte *)(iVar4 + 9) - 0x30 < 10)) &&
               (uVar6 = FUN_01bed452((byte *)(iVar4 + 9),&local_2bc,10),
               local_2bc != (byte *)(iVar4 + 9))) {
              if (9 < uVar6) {
                uVar6 = 10;
              }
              *(uint *)(param_1 + 0x58) = uVar6;
            }
            iVar4 = FUN_01bede5e(auStack_228,"timeout:");
            if (iVar4 != 0) {
              uVar6 = (uint)*(byte *)(iVar4 + 8);
              bVar8 = 0x2d < uVar6;
              if (uVar6 != 0x2e) {
                bVar8 = 8 < uVar6 - 0x30;
              }
              if ((!bVar8 || (uVar6 == 0x2e || uVar6 - 0x30 == 9)) &&
                 (uVar6 = FUN_01bed452((byte *)(iVar4 + 8),&local_2bc,10),
                 local_2bc != (byte *)(iVar4 + 8))) {
                if (0x3b < uVar6) {
                  uVar6 = 0x3c;
                }
                *(uint *)(param_1 + 0x60) = uVar6;
              }
            }
            goto LAB_01be9a10;
          }
        }
        iVar4 = FUN_01bedc16(auStack_228,"nameserver",10);
        if (iVar4 == 0) {
          uVar6 = (uint)local_21e;
          bVar8 = 0x1f < uVar6;
          if (uVar6 != 0x20) {
            bVar8 = 3 < uVar6 - 9;
          }
          if (!bVar8 || (uVar6 == 0x20 || uVar6 - 9 == 4)) {
            if (iVar7 < 3) {
              pbVar1 = local_21d;
              do {
                pbVar5 = pbVar1;
                uVar6 = (uint)*pbVar5;
                bVar8 = 0x1f < uVar6;
                if (uVar6 != 0x20) {
                  bVar8 = 3 < uVar6 - 9;
                }
                pbVar1 = pbVar5 + 1;
              } while (!bVar8 || (uVar6 == 0x20 || uVar6 - 9 == 4));
              local_2bc = pbVar5;
              while (((uVar6 & 0xdf) != 0 && (4 < uVar6 - 9))) {
                local_2bc = local_2bc + 1;
                uVar6 = (uint)*local_2bc;
              }
              *local_2bc = 0;
              iVar4 = FUN_01be7e7e(iVar7 * 0x1c + param_1,pbVar5,0);
              if (0 < iVar4) {
                iVar7 = iVar7 + 1;
              }
            }
            goto LAB_01be9a10;
          }
        }
        if ((param_2 != (undefined1 *)0x0) &&
           ((iVar4 = FUN_01bedc16(auStack_228,"domain",6), iVar4 == 0 ||
            (iVar4 = FUN_01bedc16(auStack_228,"search",6), iVar4 == 0)))) {
          uVar6 = (uint)local_222;
          bVar8 = 0x1f < uVar6;
          if (uVar6 != 0x20) {
            bVar8 = 3 < uVar6 - 9;
          }
          if (!bVar8 || (uVar6 == 0x20 || uVar6 - 9 == 4)) {
            pbVar1 = local_221;
            do {
              pbVar5 = pbVar1;
              uVar6 = (uint)*pbVar5;
              bVar8 = 0x1f < uVar6;
              if (uVar6 != 0x20) {
                bVar8 = 3 < uVar6 - 9;
              }
              pbVar1 = pbVar5 + 1;
            } while (!bVar8 || (uVar6 == 0x20 || uVar6 - 9 == 4));
            uVar6 = FUN_01bedbda(pbVar5);
            if (uVar6 < param_3) {
              FUN_01bed4e2(param_2,pbVar5,uVar6 + 1);
            }
          }
        }
        goto LAB_01be9a10;
      }
      do {
        iVar4 = FUN_01beb668(piVar2);
      } while (iVar4 != 10 && iVar4 != -1);
      goto LAB_01be9a10;
    }
    FUN_01beadb8(piVar2);
    if (iVar7 != 0) goto LAB_01be9ae8;
  }
  FUN_01be7e7e(param_1,"127.0.0.1",0);
  iVar7 = 1;
LAB_01be9ae8:
  *(int *)(param_1 + 0x54) = iVar7;
  return 0;
}

