// FUN_0069c3f8 @ 0069c3f8 size=232 calls_out=5 calls_in=2
// strings: there should be an error

undefined4 FUN_0069c3f8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined1 *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined1 **local_10;
  code *local_c;
  
  local_24 = (undefined1 *)&local_28;
  local_28 = param_1;
  FUN_01ac6cbc(*param_2,"\"",1);
  local_14 = param_2 + 1;
  local_c = FUN_00695cd4;
  local_10 = &local_24;
  local_20 = CONCAT31(local_20._1_3_,4);
  local_18 = param_2;
  iVar1 = FUN_012fa178(&local_20,&DAT_01c05334,&DAT_00590e5f,&local_10);
  if (iVar1 == 0) {
    FUN_01ac6cbc(*param_2,"\"",1);
    uVar2 = 0;
    if ((char)local_20 != '\x04') {
      FUN_0069603c(&local_20);
    }
  }
  else {
    if ((local_20 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("there should be an error",0x18,&DAT_01c05090);
    }
    uVar2 = FUN_01966f50(local_20,local_1c);
  }
  return uVar2;
}

