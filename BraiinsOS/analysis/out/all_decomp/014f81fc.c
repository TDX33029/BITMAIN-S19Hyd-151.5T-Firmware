// FUN_014f81fc @ 014f81fc size=384 calls_out=3 calls_in=4
// strings: _... | _...

uint FUN_014f81fc(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_2c [5];
  
  puVar3 = (undefined4 *)param_1[4];
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  uVar5 = 1;
  iVar2 = FUN_00faace8(puVar3,&DAT_004144fe,1);
  if (iVar2 == 0) {
    if (param_3 == 0 && param_4 == 0) {
      uVar5 = FUN_00faace8(puVar3,"_...",1);
      return uVar5;
    }
    uVar5 = param_1[5];
    if ((uint)-param_4 < (uint)(param_3 <= uVar5)) {
      uVar4 = uVar5 - param_3;
      uVar1 = -(param_4 + (uint)(uVar5 < param_3));
      if (uVar1 == 0 && (0x19 < uVar4) <= uVar1) {
        if ((*(byte *)((int)puVar3 + 0xb) & 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x014f8378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(puVar3[1] + 0x10))(*puVar3);
          return uVar5;
        }
        local_2c[0] = (uint)(byte)((char)uVar4 + 0x61);
        uVar5 = FUN_00faace8(puVar3,local_2c,1);
        return uVar5;
      }
      uVar5 = 1;
      iVar2 = FUN_00faace8(puVar3,"_...",1);
      if (iVar2 == 0) {
        iVar2 = FUN_00fabdb8(uVar4,uVar1,local_2c,0x14);
        uVar5 = FUN_00fa9698(puVar3,1,1,0,(int)local_2c + iVar2,0x14 - iVar2);
        return uVar5;
      }
    }
    else {
      iVar2 = FUN_00faace8(puVar3,&DAT_00564580,0x10);
      uVar5 = (uint)(iVar2 != 0);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0;
      }
    }
  }
  return uVar5;
}

