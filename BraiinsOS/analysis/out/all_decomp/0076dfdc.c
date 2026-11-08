// FUN_0076dfdc @ 0076dfdc size=500 calls_out=6 calls_in=2
// strings: 

void FUN_0076dfdc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30 [3];
  
  if (*(uint *)(param_2 + 0x54) == 0) {
LAB_0076e0a4:
    FUN_006e5938(local_30,param_2 + 0x18);
    if ((char)local_30[0] != '\x04') {
      *param_1 = local_30[0];
      param_1[1] = local_30[1];
      return;
    }
    uVar4 = *(uint *)(param_2 + 0x48);
    while( true ) {
      if (7 < uVar4) {
        *(undefined1 *)param_1 = 4;
        return;
      }
      local_30[1] = *(undefined4 *)(param_2 + 0x10);
      local_30[0] = *(undefined4 *)(param_2 + 8);
      if (*(int *)(param_2 + 0x30) == -0x80000000) break;
      iVar1 = *(int *)(param_2 + 0x38);
      uVar3 = 8 - uVar4;
      if ((uint)(*(int *)(param_2 + 0x30) - iVar1) < uVar3) {
        FUN_006bca64(param_2 + 0x30,iVar1,uVar3,1,1);
        iVar1 = *(int *)(param_2 + 0x38);
        uVar6 = *(uint *)(param_2 + 0x48);
      }
      else {
        uVar6 = uVar4;
      }
      FUN_016dd1aa(*(int *)(param_2 + 0x34) + iVar1,(int)local_30 + uVar4,uVar3);
      uVar4 = uVar6 + uVar3;
      *(uint *)(param_2 + 0x48) = uVar4;
      *(uint *)(param_2 + 0x38) = iVar1 + uVar3;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x30);
    uVar4 = *(uint *)(param_2 + 0x54);
    while (iVar1 != -0x80000000) {
      iVar5 = *(int *)(param_2 + 0x38);
      uVar2 = *(undefined4 *)(param_2 + 0x50);
      if ((uint)(iVar1 - iVar5) < uVar4) {
        FUN_006bca64(param_2 + 0x30,iVar5,uVar4,1,1);
        iVar5 = *(int *)(param_2 + 0x38);
        uVar3 = *(uint *)(param_2 + 0x54);
      }
      else {
        uVar3 = uVar4;
      }
      FUN_016dd1aa(*(int *)(param_2 + 0x34) + iVar5,uVar2,uVar4);
      *(uint *)(param_2 + 0x38) = iVar5 + uVar4;
      if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,uVar3,&DAT_018af198);
      }
      uVar3 = uVar3 - uVar4;
      *(undefined4 *)(param_2 + 0x54) = 0;
      if (uVar3 == 0) goto LAB_0076e0a4;
      FUN_016dd52c(*(int *)(param_2 + 0x50),*(int *)(param_2 + 0x50) + uVar4,uVar3);
      *(uint *)(param_2 + 0x54) = uVar3;
      uVar4 = uVar3;
      iVar1 = *(int *)(param_2 + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01881ec8);
}

