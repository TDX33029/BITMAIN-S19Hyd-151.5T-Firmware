// FUN_016b4e08 @ 016b4e08 size=784 calls_out=0 calls_in=5
// strings: 

void FUN_016b4e08(int param_1,int param_2,uint param_3,byte *param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 != 0) {
    if (param_3 == 0x25) {
      do {
        while( true ) {
          puVar3 = &DAT_00110000;
          if (param_4 == param_5) {
            pbVar2 = param_4;
            goto LAB_016b5098;
          }
          pbVar2 = param_4 + 1;
          puVar5 = (undefined1 *)(uint)*param_4;
          if ((uint)(int)(char)*param_4 < 0x80000000) break;
          if (puVar5 < (undefined1 *)0xe0) {
            puVar5 = (undefined1 *)(param_4[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
            pbVar2 = param_4 + 2;
            break;
          }
          uVar6 = param_4[2] & 0x3f | (param_4[1] & 0x3f) << 6;
          if ((undefined1 *)0xef < puVar5) {
            puVar5 = (undefined1 *)(param_4[3] & 0x3f | uVar6 << 6 | ((uint)puVar5 & 7) << 0x12);
            pbVar2 = param_4 + 4;
            if (puVar5 != &DAT_00110000) break;
            goto LAB_016b5098;
          }
          puVar5 = (undefined1 *)(uVar6 | ((uint)puVar5 & 0x1f) << 0xc);
          pbVar2 = param_4 + 3;
          if ((undefined1 *)0xd < puVar5) goto LAB_016b4ecc;
LAB_016b4ea4:
          if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
            puVar3 = puVar5;
          }
          param_4 = pbVar2;
          if (puVar3 != &DAT_00110000) goto LAB_016b5098;
        }
        if (puVar5 < (undefined1 *)0xe) goto LAB_016b4ea4;
LAB_016b4ecc:
        param_4 = pbVar2;
        puVar3 = puVar5;
      } while (puVar5 == &DAT_00110000);
LAB_016b5098:
      uVar6 = 8;
      do {
        while( true ) {
          if (pbVar2 == param_5) goto LAB_016b5198;
          puVar5 = (undefined1 *)(uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
          if ((uint)(int)(char)*pbVar2 < 0x80000000) break;
          if (puVar5 < (undefined1 *)0xe0) {
            puVar5 = (undefined1 *)(pbVar2[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
            pbVar1 = pbVar2 + 2;
            break;
          }
          uVar7 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
          if (puVar5 < (undefined1 *)0xf0) {
            puVar5 = (undefined1 *)(uVar7 | ((uint)puVar5 & 0x1f) << 0xc);
            pbVar1 = pbVar2 + 3;
            break;
          }
          puVar5 = (undefined1 *)(pbVar2[3] & 0x3f | uVar7 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 == &DAT_00110000) goto LAB_016b5198;
          pbVar2 = pbVar2 + 4;
          puVar4 = puVar5;
          if (puVar5 < (undefined1 *)0xe) goto LAB_016b5124;
LAB_016b5150:
          if (puVar4 != &DAT_00110000) goto LAB_016b5160;
        }
        pbVar2 = pbVar1;
        puVar4 = puVar5;
        if ((undefined1 *)0xd < puVar5) goto LAB_016b5150;
LAB_016b5124:
        puVar4 = &DAT_00110000;
        if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
          puVar4 = puVar5;
        }
      } while (puVar4 == &DAT_00110000);
LAB_016b5160:
      if (puVar3 != &DAT_00110000) {
        puVar5 = puVar3 + -0x30;
        bVar9 = (undefined1 *)0x9 < puVar5;
        bVar8 = puVar5 == (undefined1 *)0xa;
        if (bVar9) {
          puVar5 = (undefined1 *)(((uint)puVar3 & 0xffffffdf) - 0x41);
          bVar8 = puVar5 == (undefined1 *)0x5;
        }
        if ((!bVar9 || puVar5 < (undefined1 *)0x5) || bVar8) {
          puVar3 = puVar4 + -0x30;
          bVar8 = puVar3 < (undefined1 *)0xa;
          if (!bVar8) {
            puVar3 = (undefined1 *)(((uint)puVar4 & 0xffffffdf) - 0x41);
          }
          if (bVar8 || puVar3 < (undefined1 *)0x6) {
            return;
          }
        }
      }
LAB_016b5198:
                    /* WARNING: Could not recover jumptable at 0x016b51a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x14))(param_1,uVar6);
      return;
    }
    uVar6 = (param_3 & 0x1fffdf) - 0x41;
    bVar8 = 0x19 < uVar6;
    if (bVar8) {
      uVar6 = param_3 - 0x30;
    }
    if (bVar8 && 9 < uVar6) {
      switch(param_3) {
      case 0x21:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x3a:
      case 0x3b:
      case 0x3d:
      case 0x3f:
      case 0x40:
      case 0x5f:
      case 0x7e:
        break;
      default:
        if (0xd75f < param_3 - 0xa0) {
          uVar6 = param_3 - 0xe000;
          uVar7 = 0x1dd0;
          bVar8 = 0x1dcf < uVar6;
          if (bVar8) {
            uVar7 = 0x20e;
            uVar6 = param_3 - 0xfdf0;
          }
          if (bVar8 && uVar7 <= uVar6) {
            uVar6 = param_3 - 0x10000;
            bVar8 = 0xfffd < uVar6;
            if (bVar8) {
              uVar6 = param_3 - 0x20000;
            }
            if (bVar8 && 0xfffd < uVar6) {
              uVar6 = param_3 - 0x30000;
              bVar8 = 0xfffd < uVar6;
              if (bVar8) {
                uVar6 = param_3 - 0x40000;
              }
              if (bVar8 && 0xfffd < uVar6) {
                uVar6 = param_3 - 0x50000;
                bVar8 = 0xfffd < uVar6;
                if (bVar8) {
                  uVar6 = param_3 - 0x60000;
                }
                if (bVar8 && 0xfffd < uVar6) {
                  uVar6 = param_3 - 0x70000;
                  bVar8 = 0xfffd < uVar6;
                  if (bVar8) {
                    uVar6 = param_3 - 0x80000;
                  }
                  if (bVar8 && 0xfffd < uVar6) {
                    uVar6 = param_3 - 0x90000;
                    bVar8 = 0xfffd < uVar6;
                    if (bVar8) {
                      uVar6 = param_3 - 0xa0000;
                    }
                    if (bVar8 && 0xfffd < uVar6) {
                      uVar6 = param_3 - 0xb0000;
                      bVar8 = 0xfffd < uVar6;
                      if (bVar8) {
                        uVar6 = param_3 - 0xc0000;
                      }
                      if (bVar8 && 0xfffd < uVar6) {
                        uVar7 = param_3 - 0xd0000;
                        uVar6 = 0xfffe;
                        bVar8 = 0xfffd < uVar7;
                        if (bVar8) {
                          uVar7 = param_3 - 0xe1000;
                          uVar6 = 0xeffe;
                        }
                        if (bVar8 && uVar6 <= uVar7) {
                          uVar6 = param_3 - 0xf0000;
                          bVar8 = 0xfffd < uVar6;
                          if (bVar8) {
                            param_3 = param_3 - 0x100000;
                            uVar6 = 6;
                          }
                          if (bVar8 && 0xfffd < param_3) goto LAB_016b5198;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

