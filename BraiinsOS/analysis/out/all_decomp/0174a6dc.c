// FUN_0174a6dc @ 0174a6dc size=352 calls_out=10 calls_in=0
// strings: 

undefined8 FUN_0174a6dc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined1 *)FUN_0177a9c0(0x140,param_2,&PTR_018bc3f4,0),
     puVar2 != (undefined1 *)0x0)) {
    FUN_01781ff4(&DAT_018de6d8,FUN_017495ec);
    FUN_01781f64(&DAT_018de6b4);
    FUN_0174a450(DAT_018de6dc,auStack_54);
    FUN_01781fc4(&DAT_018de6b4);
    iVar3 = FUN_01749140(puVar2 + 8,auStack_54,0);
    if (iVar3 != 0) {
      *(undefined4 *)(puVar2 + 0x128) = 1;
      *(undefined4 *)(puVar2 + 300) = 0;
      FUN_0177aaa0(auStack_54,0x30);
      *puVar2 = 0;
      local_60 = 0;
      *(undefined4 *)(puVar2 + 0x120) = 0x100000;
      *(undefined4 *)(puVar2 + 0x124) = 0;
      local_5c = 0;
      iVar3 = FUN_017826a8(&local_60);
      uVar4 = 0;
      uVar1 = 0;
      if (iVar3 == 1) {
        uVar4 = local_5c;
        uVar1 = local_60;
      }
      *(undefined4 *)(puVar2 + 0x130) = uVar1;
      *(undefined4 *)(puVar2 + 0x134) = uVar4;
      puVar2[0x138] = iVar3 == 1;
      *param_1 = puVar2;
      if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

