// FUN_0128dd14 @ 0128dd14 size=1364 calls_out=3 calls_in=1
// strings: stcsvcuapplication/cu-seemecurtext/vnd.curlcwwapplication/prs.cwwcxtcxxdaemodel/vnd.collada+xmldafapplication/vnd.mobius.dafapplication/vnd.dartdatapplication/vnd.fdsn.seeddatasourceapplication/davmount+xmldbkapplication/docbook+xmldbprojdcrimage/x-kodak-dcrdcurltext/vnd.curl.dcurldd2application/vnd.oma.dd2+xmldddapplication/vnd.fujixerox.ddddebdefdeployderapplication/vnd.dreamfactorydgcapplication/x-dgc-compresseddibdicdifvideo/x-dvdirdisapplication/vnd.mobius.disdiscodisposition-notificationdistzvideo/divxdjvimage/vnd.djvudlldll.configdlmdmgdmpdmsdnaapplication/vnd.dnad | pstapplication/vnd.pvi.ptid1pubapplication/x-mspublisherpvbapplication/vnd.3gpp.pic-bw-varpwnpwzpypyapyvqamqboapplication/vnd.intu.qboqfxapplication/vnd.intu.qfxqhttext/x-html-insertionqpsapplication/vnd.publishare-delta-treeqtqtiimage/x-quicktimeqtlapplication/x-quicktimeplayerqwdapplication/vnd.quark.quarkxpressqwtqxbqxdqxlqxtraaudio/x-pn-realaudioraframapplication/raml+yamlrarapplication/x-rar-compressedrasimage/x-cmu-rasterratapplication/rat-file

void FUN_0128dd14(undefined8 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  
  if (param_3 == 0) goto LAB_0128e000;
  uVar12 = 0;
  do {
    if ((param_2[uVar12] & 0xdf) - 0x5b < 0xffffffe6) goto LAB_0128dd58;
    uVar12 = uVar12 + 1;
  } while (param_3 != uVar12);
  uVar12 = param_3;
LAB_0128dd58:
  if (uVar12 != 0) {
    if (uVar12 < param_3) {
      if ((char)param_2[uVar12] < -0x40) {
LAB_0128dd78:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar12,param_3,0x1c26328);
      }
    }
    else if (param_3 != uVar12) goto LAB_0128dd78;
    if (uVar12 == 3) {
      iVar5 = 0;
      do {
        if (iVar5 == 3) goto LAB_0128e154;
        uVar10 = (uint)param_2[iVar5];
        uVar11 = (uint)(byte)(&DAT_00404d17)[iVar5];
        iVar5 = iVar5 + 1;
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
      } while (uVar10 == uVar11);
    }
    if (uVar12 == 2) {
      iVar5 = 0;
      do {
        if (iVar5 == 2) goto LAB_0128e154;
        uVar10 = (uint)param_2[iVar5];
        uVar11 = (uint)(byte)(&DAT_00404d1a)[iVar5];
        iVar5 = iVar5 + 1;
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
      } while (uVar10 == uVar11);
    }
    if (uVar12 == 1) {
      bVar14 = false;
      pbVar6 = &DAT_004e96f0;
      pbVar8 = param_2;
      do {
        if (bVar14) goto LAB_0128e154;
        uVar10 = (uint)*pbVar6;
        uVar11 = (uint)*pbVar8;
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        bVar14 = true;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar11 == uVar10);
    }
    if (uVar12 == 3) {
      iVar5 = 0;
      do {
        if (iVar5 == 3) {
          uVar10 = 0xc7c0;
          goto LAB_0128e1f0;
        }
        uVar10 = (uint)param_2[iVar5];
        uVar11 = (uint)(byte)(&DAT_00404d1c)[iVar5];
        iVar5 = iVar5 + 1;
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
      } while (uVar10 == uVar11);
      iVar5 = 0;
      do {
        if (iVar5 == 3) goto LAB_0128df6c;
        uVar10 = (uint)param_2[iVar5];
        uVar11 = (uint)(byte)(&DAT_00404d1f)[iVar5];
        iVar5 = iVar5 + 1;
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
      } while (uVar10 == uVar11);
      iVar5 = FUN_0128e2a4(param_2,3,&DAT_00404d22);
      if (iVar5 == 0) {
        iVar5 = 0;
        do {
          if (iVar5 == 3) goto LAB_0128e1ec;
          uVar10 = (uint)param_2[iVar5];
          uVar11 = (uint)(byte)"c"[iVar5];
          iVar5 = iVar5 + 1;
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar11 - 0x41 < 0x1a) {
            uVar11 = uVar11 | 0x20;
          }
        } while (uVar10 == uVar11);
        iVar5 = 0;
        do {
          if (iVar5 == 3) goto LAB_0128e1ec;
          uVar10 = (uint)param_2[iVar5];
          uVar11 = (uint)(byte)(&DAT_00404d25)[iVar5];
          iVar5 = iVar5 + 1;
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar11 - 0x41 < 0x1a) {
            uVar11 = uVar11 | 0x20;
          }
        } while (uVar10 == uVar11);
        goto LAB_0128e0c4;
      }
LAB_0128df6c:
      uVar10 = 0xaba0;
    }
    else {
LAB_0128e0c4:
      iVar5 = FUN_0128e2a4(param_2,uVar12,&DAT_00404d28);
      if ((iVar5 == 0) && (iVar5 = FUN_0128e2a4(param_2,uVar12,&DAT_00404d2b), iVar5 == 0)) {
        iVar5 = FUN_0128e2a4(param_2,uVar12,
                             "pstapplication/vnd.pvi.ptid1pubapplication/x-mspublisherpvbapplication/vnd.3gpp.pic-bw-varpwnpwzpypyapyvqamqboapplication/vnd.intu.qboqfxapplication/vnd.intu.qfxqhttext/x-html-insertionqpsapplication/vnd.publishare-delta-treeqtqtiimage/x-quicktimeqtlapplication/x-quicktimeplayerqwdapplication/vnd.quark.quarkxpressqwtqxbqxdqxlqxtraaudio/x-pn-realaudioraframapplication/raml+yamlrarapplication/x-rar-compressedrasimage/x-cmu-rasterratapplication/rat-file"
                            );
        if (iVar5 != 0) {
          uVar10 = 0x8f80;
          goto LAB_0128e1f0;
        }
        if (uVar12 == 1) {
          uVar10 = *param_2 & 0xdf;
          uVar11 = uVar10 - 0x41;
          bVar14 = uVar11 == 9;
          if (8 < uVar11) {
            uVar10 = uVar10 - 0x4b;
            bVar14 = uVar10 == 0xe;
          }
          if ((8 >= uVar11 || uVar10 < 0xe) || bVar14) {
LAB_0128e154:
            uVar10 = 0;
            goto LAB_0128e1f4;
          }
        }
        goto LAB_0128e034;
      }
      uVar10 = 0x8f80;
    }
    uVar10 = (uVar10 | 0xffff0000) + 0xe10;
LAB_0128e1f4:
    *(byte **)param_1 = param_2 + uVar12;
    *(uint *)((int)param_1 + 4) = param_3 - uVar12;
    *(uint *)(param_1 + 1) = uVar10;
    return;
  }
  puVar4 = (undefined1 *)(uint)*param_2;
  if (0x7fffffff < (uint)(int)(char)*param_2) {
    if (puVar4 < (undefined1 *)0xe0) {
      puVar4 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
    }
    else {
      uVar12 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
      if (puVar4 < (undefined1 *)0xf0) {
        puVar4 = (undefined1 *)(uVar12 | ((uint)puVar4 & 0x1f) << 0xc);
      }
      else {
        puVar4 = (undefined1 *)(param_2[3] & 0x3f | uVar12 << 6 | ((uint)puVar4 & 7) << 0x12);
      }
    }
  }
  if (puVar4 < (undefined1 *)0x2212) {
    if (puVar4 == (undefined1 *)0x2b) {
      if (param_3 == 1) goto LAB_0128e000;
      iVar5 = (int)(char)param_2[1];
      bVar14 = false;
      if (iVar5 < -0x40) {
        uVar7 = 0x1c26258;
LAB_0128e238:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,1,param_3,uVar7);
      }
LAB_0128dff8:
      if (param_3 < 3) goto LAB_0128e000;
      bVar1 = param_2[2];
      bVar2 = bVar1 - 0x30;
      bVar15 = 8 < bVar2;
      if (bVar2 < 10) {
        bVar15 = 9 < (iVar5 - 0x30U & 0xff);
      }
      if (!bVar15) {
        iVar9 = param_3 - 1;
        if (iVar9 != 2) {
          iVar13 = (int)(char)param_2[3];
          if (iVar13 < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_2 + 1,iVar9,2,iVar9,0x1c26288);
          }
          if (1 < param_3 - 3) {
            uVar12 = (uint)param_2[4];
            if ((iVar13 - 0x30U & 0xff) < 6) {
              if ((uVar12 - 0x30 & 0xff) < 10) {
                uVar16 = FUN_0128daac();
                iVar5 = (short)(((ushort)bVar1 + (short)iVar5 * 10) - 0x10 & 0xff) * 0xe10 +
                        ((uVar12 + iVar13 * 10) - 0x10 & 0xff) * 0x3c;
                if (bVar14) {
                  iVar5 = -iVar5;
                }
                *param_1 = uVar16;
                *(int *)(param_1 + 1) = iVar5;
                return;
              }
            }
            else {
              uVar12 = uVar12 - 0x30 & 0xff;
              bVar14 = 8 < uVar12;
              if (uVar12 < 10) {
                bVar14 = 3 < (iVar13 - 0x36U & 0xff);
              }
              if (!bVar14) {
                uVar3 = 0;
                *(undefined4 *)param_1 = 0;
                goto LAB_0128e00c;
              }
            }
            goto LAB_0128e034;
          }
        }
        goto LAB_0128e000;
      }
LAB_0128e034:
      *(undefined4 *)param_1 = 0;
      uVar3 = 3;
      goto LAB_0128e00c;
    }
    if (puVar4 != (undefined1 *)0x2d) goto LAB_0128e034;
    if (param_3 != 1) {
      iVar5 = (int)(char)param_2[1];
      bVar14 = true;
      if (iVar5 < -0x40) {
        uVar7 = 0x1c26268;
        goto LAB_0128e238;
      }
      goto LAB_0128dff8;
    }
  }
  else if ((puVar4 == (undefined1 *)0x2212) || (puVar4 != &DAT_00110000)) goto LAB_0128e034;
LAB_0128e000:
  *(undefined4 *)param_1 = 0;
  uVar3 = 4;
LAB_0128e00c:
  *(undefined1 *)((int)param_1 + 4) = uVar3;
  return;
LAB_0128e1ec:
  uVar10 = 0xaba0;
LAB_0128e1f0:
  uVar10 = uVar10 | 0xffff0000;
  goto LAB_0128e1f4;
}

