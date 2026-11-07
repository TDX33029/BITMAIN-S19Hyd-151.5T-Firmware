// FUN_0070481c @ 0070481c size=156 calls_out=3 calls_in=1
// strings: 

bool FUN_0070481c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00705838(param_2 + 0x18);
  if (*param_1 == 1) {
    iVar2 = FUN_01b4b9e4(param_3,param_4,uVar1,*(undefined4 *)(param_1[1] + 8),
                         *(undefined4 *)(param_1[1] + 0xc),param_1[2] + 8,param_1[3],param_5,param_6
                        );
  }
  else {
    iVar2 = FUN_01b4b480(param_3,param_4,uVar1,param_1 + 2,param_1[1],param_5,param_6);
  }
  return iVar2 != 1;
}

