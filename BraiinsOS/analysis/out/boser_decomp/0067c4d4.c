// FUN_0067c4d4 @ 0067c4d4 size=96 calls_out=1 calls_in=2
// strings: 

bool FUN_0067c4d4(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *param_1 == -0x80000000 && *param_2 == -0x80000000;
  if ((*param_1 != -0x80000000 && *param_2 != -0x80000000) &&
     (bVar2 = false, param_1[2] == param_2[2])) {
    iVar1 = thunk_FUN_01bed842(param_1[1],param_2[1]);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

