// FUN_00fb7ebc @ 00fb7ebc size=32 calls_out=1 calls_in=3
// strings: 

void FUN_00fb7ebc(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uStack_24;
  undefined8 *apuStack_1c [2];
  undefined1 uStack_14;
  undefined1 *puStack_10;
  undefined8 *puStack_c;
  
  uStack_24 = FUN_00fb7edc(param_1,0x4d,0,&DAT_0188125c);
  puStack_c = (undefined8 *)0xfb7ed8;
  uStack_14 = 0;
  apuStack_1c[0] = &uStack_24;
  puStack_10 = (undefined1 *)(apuStack_1c + 5);
  FUN_015ea4e8(apuStack_1c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xfb7f0c);
  (*pcVar1)();
}

