// FUN_017db074 @ 017db074 size=960 calls_out=9 calls_in=1
// strings: tls handshake eof

void FUN_017db074(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int local_600 [17];
  uint local_5bc;
  int local_58c;
  char local_552;
  byte local_551;
  byte local_54e;
  undefined1 auStack_4e8 [32];
  int local_4c8;
  int local_4c4;
  undefined1 auStack_4c0 [264];
  byte local_3b8;
  uint local_3b0;
  undefined4 local_3ac;
  uint local_3a8;
  int local_3a4;
  uint local_278;
  int local_274;
  
  iVar8 = *param_2;
  iVar7 = param_2[0x4e];
  iVar10 = param_2[0x4f];
  *param_2 = 2;
  iVar3 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    FUN_01bed4e2((uint)local_600 | 4,param_2 + 1,0x134);
    FUN_01bed4e2(auStack_4c0,param_2 + 0x50,0x110);
    local_600[0] = iVar8;
    local_4c8 = iVar7;
    local_4c4 = iVar10;
    if ((local_552 != '\x01') || ((local_551 & 1) == 0)) {
      do {
        iVar3 = 0;
        iVar7 = 0;
        bVar6 = local_3b8;
        do {
          bVar9 = false;
          while (bVar2 = 0, local_58c != 0) {
            bVar2 = 1;
            FUN_0177fea8(&local_3a8,auStack_4e8,local_600,param_3);
            if ((local_3a8 & 0xff) != 4) {
              if ((local_3a8 & 0xff) != 5) goto LAB_017db2dc;
              break;
            }
            bVar9 = true;
            iVar7 = local_3a4 + iVar7;
          }
          if (bVar9) {
            FUN_01780518(&local_3a8,auStack_4e8,param_3);
            uVar5 = local_3a8 & 0xff;
            if (uVar5 != 4) {
              bVar2 = 1;
            }
            if (uVar5 == 4 || uVar5 == 5) goto LAB_017db218;
LAB_017db2dc:
LAB_017db2e4:
            FUN_01bed4e2(&local_278,local_600,0x250);
            FUN_01bed4e2(&local_3a8,auStack_4e8,0x130);
            FUN_017db510(&local_278);
            FUN_01bed4e2(param_1 + 4,&local_3a8,0x130);
            param_1[2] = local_3a8;
            param_1[3] = local_3a4;
            *param_1 = 2;
            return;
          }
LAB_017db218:
          if ((bVar6 & 1) != 0) {
LAB_017db39c:
            if ((local_552 != '\x01') || ((local_551 & 1) == 0)) {
              FUN_019a18a8(&local_278,0x25,"tls handshake eof",0x11);
              local_3a8 = local_278;
              local_3a4 = local_274;
              goto LAB_017db2e4;
            }
            goto LAB_017db128;
          }
          while( true ) {
            bVar1 = 0;
            uVar5 = local_5bc;
            if (local_5bc == 0) {
              uVar5 = (uint)local_54e;
            }
            if ((local_5bc != 0 || (uVar5 & 1) != 0) || ((local_552 == '\0' && (local_58c != 0))))
            goto LAB_017db294;
            FUN_0177fd14(&local_3a8,auStack_4e8,local_600,param_3);
            if ((local_3a8 & 0xff) != 4) break;
            if (local_3a4 == 0) goto LAB_017db39c;
            iVar3 = local_3a4 + iVar3;
          }
          if ((local_3a8 & 0xff) != 5) goto LAB_017db2dc;
          bVar1 = 1;
LAB_017db294:
          if ((local_552 == '\x01') && (local_551 != 0)) goto LAB_017db128;
          bVar6 = 0;
        } while (!(bool)(bVar2 | bVar1));
        if (iVar3 == 0 && iVar7 == 0) {
          FUN_01bed4e2(&local_278,local_600,0x250);
          FUN_017db4ac(param_2);
          FUN_01bed4e2(param_2,&local_278,0x250);
          *param_1 = 3;
          return;
        }
      } while ((local_552 == '\0') || (local_551 == 0));
    }
LAB_017db128:
    FUN_017822c0(&local_3b0,auStack_4e8,local_600,param_3);
    if ((local_3b0 & 0xff) == 4) {
      FUN_01bed4e2(param_1,local_600,0x250);
      return;
    }
    if ((local_3b0 & 0xff) == 5) {
      FUN_01bed4e2(&local_278,local_600,0x250);
      FUN_017db4ac(param_2);
      FUN_01bed4e2(param_2,&local_278,0x250);
      uVar4 = 3;
      goto LAB_017db0d0;
    }
    FUN_01bed4e2(&local_278,local_600,0x250);
    FUN_01bed4e2(&local_3a8,auStack_4e8,0x130);
    FUN_017db510(&local_278);
    FUN_01bed4e2(param_1 + 4,&local_3a8,0x130);
    param_1[2] = local_3b0;
    param_1[3] = local_3ac;
  }
  else {
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_0050c740,0x22,&DAT_01d1ca9c);
    }
    FUN_01bed4e2(param_1 + 4,param_2 + 2,0x130);
    param_1[2] = iVar7;
    param_1[3] = iVar10;
  }
  uVar4 = 2;
LAB_017db0d0:
  *param_1 = uVar4;
  return;
}

