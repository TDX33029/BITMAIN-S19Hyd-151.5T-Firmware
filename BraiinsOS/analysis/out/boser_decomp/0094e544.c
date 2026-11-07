// FUN_0094e544 @ 0094e544 size=120 calls_out=2 calls_in=7
// strings: 

void FUN_0094e544(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2[1] == 0) {
    *param_1 = 0;
  }
  else {
    param_2[1] = param_2[1] + -1;
    FUN_009c98e8(&local_18,*param_2);
    if (local_18 == 1) {
      uVar2 = CONCAT44(local_14,1);
    }
    else {
      uVar2 = FUN_00736c0c(local_10,local_c);
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *param_1 = uVar1;
    param_1[1] = (int)(uVar2 >> 0x20);
  }
  return;
}

