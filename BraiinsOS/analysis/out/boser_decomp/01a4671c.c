// FUN_01a4671c @ 01a4671c size=404 calls_out=7 calls_in=1
// strings: 

void FUN_01a4671c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar4 = *(int *)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar1 = iVar4;
  if (uVar7 == 0) {
    iVar1 = -1;
  }
  iVar5 = *(int *)(param_3 + 0xc);
  do {
    uVar6 = *(undefined4 *)(param_3 + 8);
    FUN_01a452f8(&local_3c,param_2,param_3);
    if (local_3c != 3) goto LAB_01a46848;
    if (iVar3 == 0) {
      if (uVar7 == 0) {
        FUN_01a4546c(&local_3c,param_3);
      }
      else {
LAB_01a467b8:
        iVar2 = iVar4;
        if (iVar3 != iVar4) goto LAB_01a467e8;
LAB_01a467c4:
        FUN_01a45604(&local_3c,iVar3,param_3);
      }
    }
    else if (iVar3 == 1) {
      if (uVar7 != 0) goto LAB_01a467b8;
      FUN_01a45520(&local_3c,param_3);
    }
    else {
      iVar2 = iVar1;
      if ((uVar7 & iVar3 == iVar4) != 0) goto LAB_01a467c4;
LAB_01a467e8:
      FUN_01a451d4(&local_3c,iVar3,iVar2,param_3);
    }
    if (local_3c != 3) {
LAB_01a46848:
      if (local_3c == 1) {
        *(undefined4 *)(param_3 + 8) = uVar6;
        *(int *)(param_3 + 0xc) = iVar5;
        *param_1 = 3;
        FUN_0134aee0(local_38,local_34,4,0xc);
        FUN_012d40d0(local_2c,local_28);
        return;
      }
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      param_1[4] = local_2c;
      *param_1 = local_3c;
      param_1[5] = local_28;
      return;
    }
    bVar8 = *(int *)(param_3 + 0xc) == iVar5;
    iVar5 = *(int *)(param_3 + 0xc);
    if (bVar8) {
      param_1[1] = 0;
      param_1[2] = 4;
      *param_1 = 2;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
  } while( true );
}

