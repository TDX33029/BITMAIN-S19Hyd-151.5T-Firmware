// FUN_01b83ffc @ 01b83ffc size=40 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_01b83ffc(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (*(byte *)(param_1 + 1) < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + (param_2 + 1) * 4);
  }
  return uVar1;
}

