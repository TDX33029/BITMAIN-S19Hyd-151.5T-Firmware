// FUN_01be825c @ 01be825c size=382 calls_out=10 calls_in=1
// strings: /etc/hosts

int FUN_01be825c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_6d0;
  undefined1 auStack_6c0 [144];
  byte local_630 [512];
  undefined1 auStack_430 [1036];
  
  iVar1 = FUN_01bedbda(param_3);
  iVar2 = FUN_01beadbc("/etc/hosts",auStack_6c0,auStack_430,0x408);
  if (iVar2 == 0) {
    puVar3 = (uint *)FUN_01be3244();
    if (*puVar3 < 0x15) {
      if ((0x102004U >> (*puVar3 & 0xff) & 1) == 0) {
        iVar10 = -0xb;
      }
      else {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = -0xb;
    }
  }
  else {
    iVar11 = 0;
    iVar10 = 0;
    local_6d0 = 0;
LAB_01be82ee:
    iVar4 = FUN_01beb2c0(local_630,0x200,iVar2);
    if (iVar4 != 0) {
      if (iVar10 == 0x30) {
        FUN_01beadb8(iVar2);
        return 0x30;
      }
      puVar5 = (undefined1 *)FUN_01bedada(local_630,0x23);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 10;
        puVar5[1] = 0;
      }
      pbVar6 = local_630 + 1;
      do {
        do {
          iVar4 = FUN_01bede5e(pbVar6,param_3);
          if (iVar4 == 0) goto LAB_01be82ee;
          uVar7 = (uint)*(byte *)(iVar4 + -1);
          pbVar6 = (byte *)(iVar4 + 1);
          bVar12 = 0x1f < uVar7;
          if (uVar7 != 0x20) {
            bVar12 = 3 < uVar7 - 9;
          }
        } while (bVar12 && (uVar7 != 0x20 && uVar7 - 9 != 4));
        uVar7 = (uint)*(byte *)(iVar4 + iVar1);
        bVar12 = 0x1f < uVar7;
        if (uVar7 != 0x20) {
          bVar12 = 3 < uVar7 - 9;
        }
      } while (bVar12 && (uVar7 != 0x20 && uVar7 - 9 != 4));
      pbVar6 = local_630;
      do {
        pbVar9 = pbVar6;
        if ((*pbVar9 & 0xdf) == 0) break;
        pbVar6 = pbVar9 + 1;
      } while (4 < *pbVar9 - 9);
      *pbVar9 = 0;
      iVar4 = FUN_01be7e7e(iVar10 * 0x1c + param_1,local_630,param_4);
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          iVar10 = iVar10 + 1;
        }
        else {
          local_6d0 = -5;
        }
        if (iVar11 == 0) {
          pbVar6 = pbVar9 + 1;
          do {
            pbVar8 = pbVar6;
            uVar7 = (uint)*pbVar8;
            pbVar9 = pbVar8;
            if (uVar7 == 0) goto LAB_01be8392;
            bVar12 = 0x1f < uVar7;
            if (uVar7 != 0x20) {
              bVar12 = 3 < uVar7 - 9;
            }
            pbVar6 = pbVar8 + 1;
          } while (!bVar12 || (uVar7 == 0x20 || uVar7 - 9 == 4));
          while( true ) {
            if (((uVar7 & 0xdf) == 0) || (uVar7 - 9 < 5)) break;
            pbVar9 = pbVar9 + 1;
            uVar7 = (uint)*pbVar9;
          }
LAB_01be8392:
          *pbVar9 = 0;
          iVar11 = FUN_01be8210(pbVar8);
          if (iVar11 != 0) {
            iVar11 = 1;
            FUN_01bed4e2(param_2,pbVar8,pbVar9 + (1 - (int)pbVar8));
          }
        }
      }
      goto LAB_01be82ee;
    }
    if (iVar10 == 0) {
      iVar10 = local_6d0;
    }
    FUN_01beadb8(iVar2);
  }
  return iVar10;
}

