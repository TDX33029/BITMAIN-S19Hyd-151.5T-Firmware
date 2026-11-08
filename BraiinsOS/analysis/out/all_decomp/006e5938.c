// FUN_006e5938 @ 006e5938 size=388 calls_out=7 calls_in=2
// strings: 

void FUN_006e5938(undefined2 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined2 local_26;
  
  do {
    if (*(uint *)(param_2 + 0x2c) != 0) {
      iVar2 = *(int *)(param_2 + 0x18);
      uVar1 = *(uint *)(param_2 + 0x2c);
      while( true ) {
        if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01881ea8);
        }
        iVar5 = *(int *)(param_2 + 0x20);
        uVar3 = *(undefined4 *)(param_2 + 0x28);
        if ((uint)(iVar2 - iVar5) < uVar1) {
          FUN_006bca64(param_2 + 0x18,iVar5,uVar1,1,1);
          iVar5 = *(int *)(param_2 + 0x20);
          uVar4 = *(uint *)(param_2 + 0x2c);
        }
        else {
          uVar4 = uVar1;
        }
        FUN_016dd1aa(*(int *)(param_2 + 0x1c) + iVar5,uVar3,uVar1);
        *(uint *)(param_2 + 0x20) = iVar5 + uVar1;
        if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar1,uVar4,&DAT_018af198);
        }
        uVar4 = uVar4 - uVar1;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        if (uVar4 == 0) break;
        FUN_016dd52c(*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x28) + uVar1,uVar4);
        *(uint *)(param_2 + 0x2c) = uVar4;
        iVar2 = *(int *)(param_2 + 0x18);
        uVar1 = uVar4;
      }
    }
    iVar2 = *(int *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    FUN_01007fc4(local_38,param_2,1,0,param_2 + 0x24,4);
    if (local_38[0] == '\x01') {
      FUN_0100719c(&local_2c,local_34,local_30);
      *(undefined4 *)(param_1 + 1) = local_2a;
      param_1[3] = local_26;
      *param_1 = local_2c;
      return;
    }
  } while (iVar2 != *(int *)(param_2 + 8) || iVar5 != *(int *)(param_2 + 0xc));
  *(undefined1 *)param_1 = 4;
  return;
}

