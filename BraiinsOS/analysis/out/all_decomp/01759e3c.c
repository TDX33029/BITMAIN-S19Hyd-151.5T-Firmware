// FUN_01759e3c @ 01759e3c size=1720 calls_out=5 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01759e3c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int local_1104;
  int local_1100;
  undefined1 *local_10fc;
  undefined1 *local_10f8;
  undefined1 *local_10f4;
  undefined1 *local_10f0;
  uint local_10ec;
  byte local_10e0 [168];
  byte abStack_1038 [20];
  int local_1024;
  byte abStack_d98 [24];
  undefined1 local_d80 [864];
  undefined1 local_a20 [864];
  undefined1 local_6c0 [880];
  undefined1 auStack_350 [804];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1104 = param_3;
  local_1100 = param_2;
  local_10f0 = auStack_350;
  local_1024 = param_1;
  FUN_01759d50(auStack_350,&local_1104,&PTR_018bc3f4,0);
  FUN_01759d88(auStack_350,param_5,param_5 + 0x40,param_5 + 0x80,param_5 + 0xc0,0x22);
  local_10fc = local_6c0;
  local_10f8 = local_a20;
  local_10f4 = local_d80;
  FUN_01759de0(local_10e0,local_10f4,local_10f8,local_10fc,auStack_350,5);
  local_10ec = 0;
  pbVar3 = local_10e0;
  do {
    puVar4 = (undefined1 *)((pbVar3[2] & 0x7f) << 0x10 | (uint)pbVar3[1] << 8 | (uint)*pbVar3);
    if (puVar4 < &LAB_007fe000_1) {
      *(undefined1 **)(param_1 + local_10ec * 4) = puVar4;
      if (local_10ec == 0xff) {
        bVar10 = false;
        local_10ec = 0x100;
        goto LAB_01759f9c;
      }
      local_10ec = local_10ec + 1;
    }
    pbVar3 = pbVar3 + 3;
  } while (pbVar3 != abStack_d98);
  bVar10 = true;
LAB_01759f9c:
  uVar6 = 0;
  pbVar3 = local_10e0;
  do {
    puVar4 = (undefined1 *)
             ((pbVar3[0x362] & 0x7f) << 0x10 | (uint)pbVar3[0x361] << 8 | (uint)pbVar3[0x360]);
    if (puVar4 < &LAB_007fe000_1) {
      bVar9 = uVar6 == 0xff;
      *(undefined1 **)(local_1100 + uVar6 * 4) = puVar4;
      uVar6 = uVar6 + 1;
      if (bVar9) goto LAB_01759ffc;
    }
    pbVar3 = pbVar3 + 3;
  } while (pbVar3 != abStack_d98);
  bVar10 = true;
LAB_01759ffc:
  uVar7 = 0;
  pbVar3 = local_10e0;
  do {
    puVar4 = (undefined1 *)
             ((pbVar3[0x6c2] & 0x7f) << 0x10 | (uint)pbVar3[0x6c1] << 8 | (uint)pbVar3[0x6c0]);
    if (puVar4 < &LAB_007fe000_1) {
      bVar9 = uVar7 == 0xff;
      *(undefined1 **)(local_1104 + uVar7 * 4) = puVar4;
      uVar7 = uVar7 + 1;
      if (bVar9) goto LAB_0175a058;
    }
    pbVar3 = pbVar3 + 3;
  } while (pbVar3 != abStack_d98);
  bVar10 = true;
LAB_0175a058:
  uVar8 = 0;
  pbVar3 = local_10e0;
  do {
    puVar4 = (undefined1 *)
             ((pbVar3[0xa22] & 0x7f) << 0x10 | (uint)pbVar3[0xa21] << 8 | (uint)pbVar3[0xa20]);
    if (puVar4 < &LAB_007fe000_1) {
      bVar9 = uVar8 == 0xff;
      *(undefined1 **)(param_4 + uVar8 * 4) = puVar4;
      uVar8 = uVar8 + 1;
      if (bVar9) {
        if (!bVar10) goto LAB_0175a2cc;
        break;
      }
    }
    pbVar3 = pbVar3 + 3;
  } while (pbVar3 != abStack_d98);
  do {
    FUN_01759de0(local_10e0,local_10f4,local_10f8,local_10fc,local_10f0,1);
    uVar2 = local_10ec;
    if (local_10ec < 0x100) {
      pbVar3 = local_10e0;
      do {
        puVar4 = (undefined1 *)((pbVar3[2] & 0x7f) << 0x10 | (uint)pbVar3[1] << 8 | (uint)*pbVar3);
        if (puVar4 < &LAB_007fe000_1) {
          bVar10 = uVar2 == 0xff;
          *(undefined1 **)(param_1 + uVar2 * 4) = puVar4;
          uVar2 = uVar2 + 1;
          if (bVar10) break;
        }
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 != abStack_1038);
    }
    if (uVar6 < 0x100) {
      pbVar3 = local_10e0;
      do {
        puVar4 = (undefined1 *)
                 ((pbVar3[0x362] & 0x7f) << 0x10 | (uint)pbVar3[0x361] << 8 | (uint)pbVar3[0x360]);
        if (puVar4 < &LAB_007fe000_1) {
          bVar10 = uVar6 == 0xff;
          *(undefined1 **)(local_1100 + uVar6 * 4) = puVar4;
          uVar6 = uVar6 + 1;
          if (bVar10) break;
        }
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 != abStack_1038);
    }
    pbVar3 = local_10e0;
    if (uVar7 < 0x100) {
      do {
        puVar4 = (undefined1 *)
                 ((pbVar3[0x6c2] & 0x7f) << 0x10 | (uint)pbVar3[0x6c1] << 8 | (uint)pbVar3[0x6c0]);
        if (puVar4 < &LAB_007fe000_1) {
          bVar10 = uVar7 == 0xff;
          *(undefined1 **)(local_1104 + uVar7 * 4) = puVar4;
          uVar7 = uVar7 + 1;
          if (bVar10) goto LAB_0175a29c;
        }
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 != abStack_1038);
      if (uVar8 < 0x100) goto LAB_0175a21c;
LAB_0175a26c:
      if (uVar2 < 0x100) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
LAB_0175a29c:
      if (uVar8 < 0x100) {
LAB_0175a21c:
        pbVar3 = local_10e0;
        do {
          puVar4 = (undefined1 *)
                   ((pbVar3[0xa22] & 0x7f) << 0x10 | (uint)pbVar3[0xa21] << 8 | (uint)pbVar3[0xa20])
          ;
          if (puVar4 < &LAB_007fe000_1) {
            bVar10 = uVar8 == 0xff;
            *(undefined1 **)(param_4 + uVar8 * 4) = puVar4;
            uVar8 = uVar8 + 1;
            if (bVar10) goto LAB_0175a2a4;
          }
          pbVar3 = pbVar3 + 3;
        } while (pbVar3 != abStack_1038);
        goto LAB_0175a26c;
      }
LAB_0175a2a4:
      uVar1 = (uint)(uVar2 < 0x100);
      uVar5 = uVar1;
      if (uVar6 < 0x100) {
        uVar5 = 1;
      }
      if (uVar7 < 0x100) {
        uVar5 = 1;
      }
      if (uVar5 == 0) goto LAB_0175a2cc;
    }
    if (0xff < local_10ec) break;
    local_10ec = uVar2;
  } while( true );
  local_10ec = uVar1;
LAB_0175a348:
  do {
    FUN_01759de0(local_10e0,local_10f4,local_10f8,local_10fc,local_10f0,1);
    if (uVar6 < 0x100) {
      pbVar3 = local_10e0;
      do {
        puVar4 = (undefined1 *)
                 ((uint)pbVar3[0x361] << 8 | (pbVar3[0x362] & 0x7f) << 0x10 | (uint)pbVar3[0x360]);
        if (puVar4 < &LAB_007fe000_1) {
          bVar10 = uVar6 == 0xff;
          *(undefined1 **)(local_1100 + uVar6 * 4) = puVar4;
          uVar6 = uVar6 + 1;
          if (bVar10) break;
        }
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 != abStack_1038);
    }
    if (uVar7 < 0x100) {
      pbVar3 = local_10e0;
      do {
        puVar4 = (undefined1 *)
                 ((uint)pbVar3[0x6c1] << 8 | (pbVar3[0x6c2] & 0x7f) << 0x10 | (uint)pbVar3[0x6c0]);
        if (puVar4 < &LAB_007fe000_1) {
          bVar10 = uVar7 == 0xff;
          *(undefined1 **)(local_1104 + uVar7 * 4) = puVar4;
          uVar7 = uVar7 + 1;
          if (bVar10) goto LAB_0175a4bc;
        }
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 != abStack_1038);
      if (uVar8 < 0x100) {
LAB_0175a440:
        pbVar3 = local_10e0;
        do {
          puVar4 = (undefined1 *)
                   ((uint)pbVar3[0xa21] << 8 | (pbVar3[0xa22] & 0x7f) << 0x10 | (uint)pbVar3[0xa20])
          ;
          if (puVar4 < &LAB_007fe000_1) {
            bVar10 = uVar8 == 0xff;
            *(undefined1 **)(param_4 + uVar8 * 4) = puVar4;
            uVar8 = uVar8 + 1;
            if (bVar10) goto LAB_0175a494;
          }
          pbVar3 = pbVar3 + 3;
        } while (pbVar3 != abStack_1038);
      }
      goto LAB_0175a348;
    }
LAB_0175a4bc:
    if (uVar8 < 0x100) goto LAB_0175a440;
LAB_0175a494:
    uVar2 = local_10ec;
    if (uVar6 < 0x100) {
      uVar2 = local_10ec | 1;
    }
    if (uVar7 < 0x100) {
      uVar2 = uVar2 | 1;
    }
    if (uVar2 == 0) {
LAB_0175a2cc:
      FUN_0177aaa0(local_10e0,0xd80);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  } while( true );
}

