// FUN_0138c348 @ 0138c348 size=356 calls_out=3 calls_in=0
// strings: 

void FUN_0138c348(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  byte local_26;
  byte bStack_25;
  char cStack_24;
  char cStack_23;
  undefined1 uStack_22;
  undefined4 local_21;
  undefined1 local_1d;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0x20) {
                    /* WARNING: Could not recover jumptable at 0x0138c37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"\' \'",3);
    return;
  }
  local_1d = 0;
  local_21 = 0;
  bStack_25 = 0;
  cStack_24 = '\0';
  cStack_23 = '\0';
  uStack_22 = 0;
  bVar2 = (&DAT_003b7579)[uVar1] & 0x7f;
  if ((char)(&DAT_003b7579)[uVar1] < '\0') {
    if (bVar2 == 0) {
      cStack_23 = (&DAT_00563e90)[uVar1 & 0xf];
      cStack_24 = (&DAT_00563e90)[*param_1 >> 4];
      local_26 = 0x5c;
      bStack_25 = 0x78;
      if ((byte)(cStack_23 + 0x9fU) < 6) {
        cStack_23 = cStack_23 + -0x20;
      }
      uVar3 = 4;
      if ((byte)(cStack_24 + 0x9fU) < 6) {
        cStack_24 = cStack_24 + -0x20;
      }
    }
    else {
      uVar3 = 2;
      local_26 = 0x5c;
      bStack_25 = bVar2;
    }
  }
  else {
    uVar3 = 1;
    local_26 = bVar2;
  }
  FUN_00fab1e0(&local_1c,&local_26,uVar3);
  if (local_1c == (undefined4 *)0x1) {
    local_10 = local_18;
    local_c = local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_10,&DAT_01892d60,&DAT_01892d80);
  }
  local_c = local_14;
  local_10 = local_18;
  local_18 = &DAT_0157d360;
  local_1c = &local_10;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_1c);
  return;
}

