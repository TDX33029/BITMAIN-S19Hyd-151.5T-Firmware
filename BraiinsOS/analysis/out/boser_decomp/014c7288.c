// FUN_014c7288 @ 014c7288 size=100 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_014c7288(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_014c4050(param_2,(char)param_1[3],*(undefined1 *)((int)param_1 + 0xd));
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else if ((*param_1 != -0x80000000) &&
          (iVar2 = FUN_014c72ec(iVar1,param_1[1],param_1[2]), iVar2 == 0)) {
    param_2 = 0;
  }
  return CONCAT44(iVar1,param_2);
}

