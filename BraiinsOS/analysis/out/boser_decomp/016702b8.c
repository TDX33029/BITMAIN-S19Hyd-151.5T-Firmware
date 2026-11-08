// FUN_016702b8 @ 016702b8 size=1032 calls_out=2 calls_in=3
// strings: 00102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F202122232425262728292A2B2C2D2E2F303132333435363738393A3B3C3D3E3F404142434445464748494A4B4C4D4E4F505152535455565758595A5B5C5D5E5F606162636465666768696A6B6C6D6E6F707172737475767778797A7B7C7D7E7F808182838485868788898A8B8C8D8E8F909192939495969798999A9B9C9D9E9FA0A1A2A3A4A5A6A7A8A9AAABACADAEAFB0B1B2B3B4B5B6B7B8B9BABBBCBDBEBFC0C1C2C3C4C5C6C7C8C9CACBCCCDCECFD0D1D2D3D4D5D6D7D8D9DADBDCDDDEDFE0E1E2E3E4E5E6E7E8E9EAEBECEDEEEFF0F1F2F3F4F5F6F7F8F9FAFBFCFDFEFF

void FUN_016702b8(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 local_28;
  
  if (param_2 == 0) {
    return;
  }
  pbVar5 = param_1;
  do {
    pbVar11 = pbVar5 + 1;
    puVar12 = (undefined1 *)(uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (puVar12 < (undefined1 *)0xe0) {
        puVar12 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        pbVar11 = pbVar5 + 2;
      }
      else {
        uVar10 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (puVar12 < (undefined1 *)0xf0) {
          puVar12 = (undefined1 *)(uVar10 | ((uint)puVar12 & 0x1f) << 0xc);
          pbVar11 = pbVar5 + 3;
        }
        else {
          puVar12 = (undefined1 *)(pbVar5[3] & 0x3f | uVar10 << 6 | ((uint)puVar12 & 7) << 0x12);
          if (puVar12 == &DAT_00110000) {
            return;
          }
          pbVar11 = pbVar5 + 4;
        }
      }
    }
    iVar4 = FUN_0134399c("",puVar12);
    bVar13 = (byte)puVar12;
    if (iVar4 == 0) {
      if (puVar12 < (undefined1 *)0x80) {
        local_28 = (uint)puVar12 & 0xff;
        pbVar5 = (byte *)((uint)&local_28 | 1);
      }
      else {
        uVar2 = (undefined1)((uint)puVar12 >> 6);
        if (puVar12 < (undefined1 *)0x800) {
          local_28 = (CONCAT11(bVar13,uVar2) & 0x3fff | 0x8000) | 0xc0;
          pbVar5 = (byte *)((uint)&local_28 | 2);
        }
        else {
          uVar3 = (undefined1)((uint)puVar12 >> 0xc);
          if ((uint)puVar12 >> 0x10 == 0) {
            local_28 = (CONCAT21(CONCAT11(bVar13,uVar2),uVar3) & 0xff3fff | 0x8000) & 0x3fffff |
                       0x8000e0;
            pbVar5 = (byte *)((uint)&local_28 | 3);
          }
          else {
            local_28 = CONCAT31(CONCAT21(CONCAT11(bVar13,uVar2),uVar3),(char)((uint)puVar12 >> 0x12)
                               ) & 0x3f3f3fff | 0x808080f0;
            pbVar5 = (byte *)((int)register0x00000054 + -0x24);
          }
        }
      }
      iVar4 = param_3[2];
      pbVar14 = (byte *)&local_28;
      do {
        iVar9 = *param_3;
        pbVar15 = pbVar14 + 1;
        bVar13 = *pbVar14;
        iVar7 = iVar4;
        if (iVar9 == iVar4) {
          FUN_016092cc(param_3,iVar4,1,1,1);
          iVar9 = *param_3;
          iVar7 = param_3[2];
        }
        iVar6 = param_3[1];
        iVar4 = iVar4 + 1;
        param_3[2] = iVar4;
        *(undefined1 *)(iVar6 + iVar7) = 0x25;
        uVar10 = 2;
        bVar8 = "0"[(uint)bVar13 * 2];
        if ((uint)(int)(char)bVar8 < 0x80000000) {
          uVar10 = 1;
        }
        iVar7 = iVar4;
        if ((uint)(iVar9 - iVar4) < uVar10) {
          FUN_016092cc(param_3,iVar4,uVar10,1,1);
          iVar6 = param_3[1];
          iVar7 = param_3[2];
        }
        if (0x7fffffff < (uint)(int)(char)bVar8) {
          ((byte *)(iVar6 + iVar7))[1] = bVar8 & 0xbf;
          bVar8 = bVar8 >> 6 | 0xc0;
        }
        bVar13 = "00102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F202122232425262728292A2B2C2D2E2F303132333435363738393A3B3C3D3E3F404142434445464748494A4B4C4D4E4F505152535455565758595A5B5C5D5E5F606162636465666768696A6B6C6D6E6F707172737475767778797A7B7C7D7E7F808182838485868788898A8B8C8D8E8F909192939495969798999A9B9C9D9E9FA0A1A2A3A4A5A6A7A8A9AAABACADAEAFB0B1B2B3B4B5B6B7B8B9BABBBCBDBEBFC0C1C2C3C4C5C6C7C8C9CACBCCCDCECFD0D1D2D3D4D5D6D7D8D9DADBDCDDDEDFE0E1E2E3E4E5E6E7E8E9EAEBECEDEEEFF0F1F2F3F4F5F6F7F8F9FAFBFCFDFEFF"
                 [(uint)bVar13 * 2];
        iVar4 = uVar10 + iVar4;
        iVar9 = *param_3;
        uVar10 = 2;
        *(byte *)(iVar6 + iVar7) = bVar8;
        if ((uint)(int)(char)bVar13 < 0x80000000) {
          uVar10 = 1;
        }
        param_3[2] = iVar4;
        iVar7 = iVar4;
        if ((uint)(iVar9 - iVar4) < uVar10) {
          FUN_016092cc(param_3,iVar4,uVar10,1,1);
          iVar6 = param_3[1];
          iVar7 = param_3[2];
        }
        if (0x7fffffff < (uint)(int)(char)bVar13) {
          ((byte *)(iVar6 + iVar7))[1] = bVar13 & 0xbf;
          bVar13 = bVar13 >> 6 | 0xc0;
        }
        iVar4 = uVar10 + iVar4;
        *(byte *)(iVar6 + iVar7) = bVar13;
        param_3[2] = iVar4;
        pbVar14 = pbVar15;
      } while (pbVar15 != pbVar5);
    }
    else {
      iVar4 = param_3[2];
      uVar10 = 1;
      if ((undefined1 *)0x7f < puVar12) {
        uVar10 = 2;
      }
      if (((undefined1 *)0x7ff < puVar12) && (uVar10 = 4, puVar12 < (undefined1 *)0x10000)) {
        uVar10 = 3;
      }
      iVar7 = iVar4;
      if ((uint)(*param_3 - iVar4) < uVar10) {
        FUN_016092cc(param_3,iVar4,uVar10,1,1);
        iVar7 = param_3[2];
      }
      pbVar5 = (byte *)(param_3[1] + iVar7);
      if (puVar12 < (undefined1 *)0x80) {
        *pbVar5 = bVar13;
      }
      else {
        bVar13 = bVar13 & 0x3f | 0x80;
        bVar8 = (byte)((uint)puVar12 >> 6);
        if (puVar12 < (undefined1 *)0x800) {
          bVar8 = bVar8 | 0xc0;
          pbVar5[1] = bVar13;
        }
        else {
          bVar1 = bVar8 & 0x3f | 0x80;
          bVar8 = (byte)((uint)puVar12 >> 0xc);
          if ((uint)puVar12 >> 0x10 != 0) {
            pbVar5[3] = bVar13;
            pbVar5[2] = bVar1;
            pbVar5[1] = bVar8 & 0x3f | 0x80;
            *pbVar5 = (byte)((uint)puVar12 >> 0x12) | 0xf0;
            goto LAB_016704cc;
          }
          pbVar5[1] = bVar1;
          bVar8 = bVar8 | 0xe0;
          pbVar5[2] = bVar13;
        }
        *pbVar5 = bVar8;
      }
LAB_016704cc:
      param_3[2] = uVar10 + iVar4;
    }
    pbVar5 = pbVar11;
    if (pbVar11 == param_1 + param_2) {
      return;
    }
  } while( true );
}

