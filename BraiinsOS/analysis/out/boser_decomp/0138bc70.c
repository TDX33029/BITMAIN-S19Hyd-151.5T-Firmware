// FUN_0138bc70 @ 0138bc70 size=44 calls_out=0 calls_in=4
// strings: 

ulonglong FUN_0138bc70(uint param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = param_2 == 0;
  uVar2 = (uint)((bool)uVar1 && param_1 < (uint)param_3[1]);
  if (uVar2 != 0) {
    uVar1 = *(undefined1 *)(*param_3 + param_1);
  }
  return (ulonglong)CONCAT14(uVar1,uVar2);
}

