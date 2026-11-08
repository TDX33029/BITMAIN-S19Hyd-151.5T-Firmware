// FUN_01307bf0 @ 01307bf0 size=32 calls_out=1 calls_in=3
// strings: 

void FUN_01307bf0(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uStack_24;
  undefined8 *apuStack_1c [2];
  undefined1 uStack_14;
  undefined1 *puStack_10;
  undefined8 *puStack_c;
  
  uStack_24 = FUN_01307c10(param_1,0x4d,0,&DAT_01ce4a90);
  puStack_c = (undefined8 *)0x1307c0c;
  uStack_14 = 0;
  apuStack_1c[0] = &uStack_24;
  puStack_10 = (undefined1 *)(apuStack_1c + 5);
  FUN_019a3ff8(apuStack_1c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1307c40);
  (*pcVar1)();
}

