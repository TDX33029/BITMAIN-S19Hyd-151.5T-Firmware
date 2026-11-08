// FUN_00f6a618 @ 00f6a618 size=1492 calls_out=2 calls_in=1
// strings: pstnesdayrsdayurday

void FUN_00f6a618(undefined4 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  ushort uVar8;
  bool bVar9;
  
  if (param_3 == 0) goto LAB_00f6aaa8;
  uVar5 = 0;
  do {
    if ((param_2[uVar5] & 0xdf) - 0x5b < 0xffffffe6) goto LAB_00f6a658;
    uVar5 = uVar5 + 1;
  } while (param_3 != uVar5);
  uVar5 = param_3;
LAB_00f6a658:
  if (uVar5 != 0) {
    if (uVar5 < param_3) {
      if ((char)param_2[uVar5] < -0x40) {
LAB_00f6a678:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,uVar5,param_3,&DAT_0188018c);
      }
    }
    else if (param_3 != uVar5) goto LAB_00f6a678;
    if (uVar5 == 1) {
      uVar1 = (uint)*param_2;
      bVar9 = true;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x7a) goto LAB_00f6a9f0;
LAB_00f6aa6c:
      uVar1 = 0;
    }
    else {
      bVar9 = false;
      if (uVar5 == 2) {
        uVar1 = (uint)*param_2;
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x75) {
          uVar1 = (uint)param_2[1];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x74) goto LAB_00f6aa6c;
        }
LAB_00f6a9f0:
        iVar2 = FUN_00f6ac08(param_2,uVar5,"pdt");
        if (iVar2 == 0) {
          iVar2 = FUN_00f6ac08(param_2,uVar5,"pstnesdayrsdayurday");
          if (iVar2 != 0) {
            uVar1 = 0x8f80;
LAB_00f6aa40:
            uVar1 = uVar1 | 0xffff0000;
            goto LAB_00f6aa70;
          }
          if (!bVar9) goto LAB_00f6ab64;
          uVar1 = *param_2 & 0xdf;
          uVar4 = uVar1 - 0x41;
          bVar9 = uVar4 == 9;
          if (8 < uVar4) {
            uVar1 = uVar1 - 0x4b;
            bVar9 = uVar1 == 0xe;
          }
          if ((8 < uVar4 && 0xd < uVar1) && !bVar9) goto LAB_00f6ab64;
          goto LAB_00f6aa6c;
        }
LAB_00f6aa10:
        uVar1 = 0x8f80;
      }
      else {
        if (uVar5 != 3) goto LAB_00f6a9f0;
        uVar1 = (uint)*param_2;
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x65) {
          if (uVar1 == 0x67) {
            uVar1 = (uint)param_2[1];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x6d) {
              uVar1 = (uint)param_2[2];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x74) goto LAB_00f6aa6c;
            }
          }
          goto LAB_00f6a8c0;
        }
        uVar1 = (uint)param_2[1];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x73) {
          if (uVar1 == 100) {
            uVar1 = (uint)param_2[2];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 != 0x74) goto LAB_00f6a8c0;
            uVar1 = 0xc7c0;
            goto LAB_00f6aa40;
          }
LAB_00f6a8c0:
          uVar1 = (uint)*param_2;
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 99) {
            uVar1 = (uint)param_2[1];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 100) {
              uVar1 = (uint)param_2[2];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x74) goto LAB_00f6a908;
            }
          }
          uVar1 = (uint)*param_2;
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 99) {
            uVar1 = (uint)param_2[1];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 != 0x73) goto LAB_00f6a958;
            uVar1 = (uint)param_2[2];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 != 0x74) goto LAB_00f6a958;
LAB_00f6a9a0:
            uVar1 = 0xaba0;
            goto LAB_00f6aa40;
          }
LAB_00f6a958:
          uVar1 = (uint)*param_2;
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x6d) {
            uVar1 = (uint)param_2[1];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 100) {
              uVar1 = (uint)param_2[2];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x74) goto LAB_00f6a9a0;
            }
          }
          uVar1 = (uint)*param_2;
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 0x6d) goto LAB_00f6a9f0;
          uVar1 = (uint)param_2[1];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 0x73) goto LAB_00f6a9f0;
          uVar1 = (uint)param_2[2];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 0x74) goto LAB_00f6a9f0;
          goto LAB_00f6aa10;
        }
        uVar1 = (uint)param_2[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x74) goto LAB_00f6a8c0;
LAB_00f6a908:
        uVar1 = 0xaba0;
      }
      uVar1 = (uVar1 | 0xffff0000) + 0xe10;
    }
LAB_00f6aa70:
    param_1[1] = param_3 - uVar5;
    *param_1 = param_2 + uVar5;
    param_1[2] = uVar1;
    return;
  }
  uVar5 = (uint)*param_2;
  if ((uint)(int)(char)*param_2 < 0x80000000) {
joined_r0x00f6a7c0:
    if (uVar5 == 0x2b) goto LAB_00f6a84c;
LAB_00f6a7c4:
    if (uVar5 != 0x2d) goto LAB_00f6ab64;
    uVar6 = 4;
    if (param_3 == 1) goto LAB_00f6a894;
    iVar2 = (int)(char)param_2[1];
    bVar9 = true;
    if (iVar2 < -0x40) {
      puVar3 = &DAT_018800cc;
      goto LAB_00f6ab98;
    }
  }
  else {
    if (uVar5 < 0xe0) {
      uVar5 = param_2[1] & 0x3f | (uVar5 & 0x1f) << 6;
      goto joined_r0x00f6a7c0;
    }
    uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
    if (uVar5 < 0xf0) {
      uVar5 = uVar1 | (uVar5 & 0x1f) << 0xc;
      goto joined_r0x00f6a7c0;
    }
    uVar5 = param_2[3] & 0x3f | uVar1 << 6 | (uVar5 & 7) << 0x12;
    if (uVar5 != 0x2b) goto LAB_00f6a7c4;
LAB_00f6a84c:
    uVar6 = 4;
    if (param_3 == 1) goto LAB_00f6a894;
    iVar2 = (int)(char)param_2[1];
    bVar9 = false;
    if (iVar2 < -0x40) {
      puVar3 = &DAT_018800bc;
LAB_00f6ab98:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,1,param_3,puVar3);
    }
  }
  uVar6 = 4;
  if (2 < param_3) {
    uVar6 = 3;
    uVar5 = iVar2 - 0x30U & 0xff;
    uVar8 = (ushort)uVar5;
    if (uVar5 < 10) {
      uVar8 = (ushort)param_2[2];
      uVar5 = param_2[2] - 0x30 & 0xff;
    }
    if (uVar5 < 10) {
      uVar5 = param_3 - 1;
      if (2 < uVar5) {
        iVar7 = (int)(char)param_2[3];
        if (iVar7 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2 + 1,uVar5,2,uVar5,&DAT_018800ec);
        }
        uVar5 = param_3 - 3;
        if (1 < uVar5) {
          uVar1 = (uint)param_2[4];
          if ((iVar7 - 0x30U & 0xff) < 6) {
            if ((uVar1 - 0x30 & 0xff) < 10) {
              if ((uVar5 != 2) && ((char)param_2[5] < -0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(param_2 + 3,uVar5,2,uVar5,&DAT_018800fc);
              }
              *param_1 = param_2 + 5;
              param_1[1] = param_3 - 5;
              iVar2 = (short)((uVar8 + (short)iVar2 * 10) - 0x10 & 0xff) * 0xe10 +
                      ((uVar1 + iVar7 * 10) - 0x10 & 0xff) * 0x3c;
              if (bVar9) {
                iVar2 = -iVar2;
              }
              param_1[2] = iVar2;
              return;
            }
          }
          else {
            uVar5 = iVar7 - 0x36U & 0xff;
            bVar9 = 2 < uVar5;
            if (uVar5 < 4) {
              bVar9 = 9 < (uVar1 - 0x30 & 0xff);
            }
            if (!bVar9) {
              *param_1 = 0;
              *(undefined1 *)(param_1 + 1) = 0;
              return;
            }
          }
LAB_00f6ab64:
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 3;
          return;
        }
      }
LAB_00f6aaa8:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 4;
      return;
    }
  }
LAB_00f6a894:
  *(undefined1 *)(param_1 + 1) = uVar6;
  *param_1 = 0;
  return;
}

