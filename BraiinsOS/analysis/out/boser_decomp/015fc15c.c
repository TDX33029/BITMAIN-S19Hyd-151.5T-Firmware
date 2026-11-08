// FUN_015fc15c @ 015fc15c size=184 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_015fc15c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  uVar8 = 1;
  iVar9 = 1;
  iVar6 = 0;
  iVar5 = 1;
  do {
    uVar3 = iVar10 + iVar6;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,param_2,&DAT_01cfde18);
    }
    bVar1 = *(byte *)(param_1 + uVar8);
    bVar2 = *(byte *)(param_1 + uVar3);
    if (param_3 == 0) {
      if (bVar1 < bVar2) goto LAB_015fc1c4;
      if (bVar1 != bVar2) goto LAB_015fc1dc;
LAB_015fc1a0:
      iVar4 = iVar6 + 1;
      iVar7 = iVar5;
      if (iVar4 == iVar9) {
        iVar7 = iVar5 + iVar9;
      }
      iVar6 = 0;
      if (iVar4 != iVar9) {
        iVar6 = iVar4;
      }
    }
    else if (bVar2 < bVar1) {
LAB_015fc1c4:
      iVar7 = iVar5 + 1;
      iVar9 = 1;
      iVar6 = 0;
      iVar10 = iVar5;
    }
    else {
      if (bVar2 <= bVar1) goto LAB_015fc1a0;
LAB_015fc1dc:
      iVar5 = iVar6 + iVar5;
      iVar6 = 0;
      iVar7 = iVar5 + 1;
      iVar9 = iVar7 - iVar10;
    }
    uVar8 = iVar7 + iVar6;
    iVar5 = iVar7;
    if (param_2 <= uVar8) {
      return CONCAT44(iVar9,iVar10);
    }
  } while( true );
}

