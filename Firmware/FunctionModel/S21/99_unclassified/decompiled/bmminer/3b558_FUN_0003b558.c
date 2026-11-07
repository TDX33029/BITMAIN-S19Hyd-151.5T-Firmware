// FUN_0003b558 @ 0003b558  size=120  callers=2
// program: bmminer


void FUN_0003b558(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_2; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    FUN_0003b44c(param_3,"%s: %s\r\n",*puVar1,puVar1[1]);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x20) == 0) {
    FUN_0003b44c(param_3,"Content-Length: %d\r\n",param_2[2]);
  }
  FUN_0003b44c(param_3,"\r\n");
  return;
}

