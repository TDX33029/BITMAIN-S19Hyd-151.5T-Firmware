// FUN_0162a048 @ 0162a048 size=160 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_0162a048(undefined4 param_1,undefined4 param_2)

{
  int local_20;
  undefined1 *local_1c;
  int iStack_18;
  
  FUN_00602b88(&local_20,param_1,param_2);
  if (local_20 == -0x80000000) {
    software_interrupt(0);
    *local_1c = 0;
    if (iStack_18 != 0) {
      thunk_FUN_016d3fb4(local_1c,0xffffff9c,0xffffff9c);
    }
    return 0xffffff9c00000001;
  }
  if (local_20 != 0) {
    thunk_FUN_016d3fb4(local_1c);
  }
  return 0xffea00000001;
}

