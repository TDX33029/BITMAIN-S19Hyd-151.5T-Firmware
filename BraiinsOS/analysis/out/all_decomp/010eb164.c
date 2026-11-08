// FUN_010eb164 @ 010eb164 size=128 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_010eb164(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar2 = &DAT_00412ff6;
  if (param_2 != 0) {
    puVar2 = &DAT_00412ff0;
  }
  FUN_01623924(&local_20,param_1,&DAT_00414725,5,puVar2,1);
  uStack_18 = uStack_1c;
  if ((char)local_20 == '\x04') {
    return 0;
  }
  uStack_1c = local_20;
  local_20 = 0;
  uVar1 = FUN_010ea768(&local_20);
  return uVar1;
}

