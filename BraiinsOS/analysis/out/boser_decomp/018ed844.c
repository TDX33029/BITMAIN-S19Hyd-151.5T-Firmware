// FUN_018ed844 @ 018ed844 size=124 calls_out=3 calls_in=2
// strings: 

bool FUN_018ed844(int *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c [2];
  undefined4 local_14;
  
  local_14 = 0;
  local_1c[0] = 0;
  iVar1 = param_2 << 4;
  do {
    iVar5 = iVar1;
    if (iVar5 == 0) break;
    uVar2 = (undefined2)param_1[3];
    if (*param_1 == -0x7fffffff) {
      uVar2 = 0x19;
    }
    uVar3 = FUN_018eb328(uVar2,*(undefined2 *)((int)param_1 + 0xe));
    iVar4 = FUN_01930aa8(local_1c,uVar3);
    param_1 = param_1 + 4;
    iVar1 = iVar5 + -0x10;
  } while (iVar4 != 0);
  FUN_0192f740(local_1c);
  return iVar5 != 0;
}

