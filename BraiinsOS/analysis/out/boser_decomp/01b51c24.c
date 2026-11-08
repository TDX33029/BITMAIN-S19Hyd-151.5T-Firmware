// FUN_01b51c24 @ 01b51c24 size=348 calls_out=10 calls_in=0
// strings: 

undefined8 FUN_01b51c24(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_01d53560;
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar3 = (undefined1 *)FUN_01b6b0a8(0x140,param_2,&PTR_01d3b2b0,0),
     puVar3 != (undefined1 *)0x0)) {
    FUN_01b70810(&DAT_01d51be0,FUN_01b513fc);
    FUN_01b7079c(&DAT_01d51bbc);
    FUN_01b51a04(DAT_01d51be4,auStack_54);
    FUN_01b707fc(&DAT_01d51bbc);
    iVar4 = FUN_01b512a0(puVar3 + 8,auStack_54,0);
    if (iVar4 != 0) {
      *(undefined4 *)(puVar3 + 0x128) = 1;
      *(undefined4 *)(puVar3 + 300) = 0;
      FUN_01b6b174(auStack_54,0x30);
      *puVar3 = 0;
      local_60 = 0;
      *(undefined4 *)(puVar3 + 0x120) = 0x100000;
      *(undefined4 *)(puVar3 + 0x124) = 0;
      local_5c = 0;
      iVar4 = FUN_01b70eec(&local_60);
      if (iVar4 == 1) {
        puVar3[0x138] = 1;
        uVar1 = local_5c;
        uVar2 = local_60;
      }
      else {
        puVar3[0x138] = 0;
        uVar1 = 0;
        uVar2 = 0;
      }
      *(undefined4 *)(puVar3 + 0x130) = uVar2;
      *(undefined4 *)(puVar3 + 0x134) = uVar1;
      *param_1 = puVar3;
      if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

