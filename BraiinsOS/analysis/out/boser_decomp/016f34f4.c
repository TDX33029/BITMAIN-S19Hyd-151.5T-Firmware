// FUN_016f34f4 @ 016f34f4 size=336 calls_out=5 calls_in=1
// strings: 

void FUN_016f34f4(char *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char local_38 [12];
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  if (*param_1 == ' ') {
                    /* WARNING: Could not recover jumptable at 0x016f3528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"\' \'",3);
    return;
  }
  uVar4 = 0;
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  FUN_01307070(&local_2c);
  bVar2 = UnsignedSaturate(local_28._1_1_ - (char)local_28,0x10);
  cVar1 = local_28._1_1_ >> 7;
  cVar3 = (char)local_28 >> 7;
  UnsignedSaturate(cVar1 - cVar3,0x10);
  UnsignedSaturate(cVar1 - cVar3,0x10);
  UnsignedSaturate(cVar1 - cVar3,0x10);
  while( true ) {
    if (bVar2 == uVar4) {
      FUN_012fbd94(&local_2c,local_38,uVar4);
      if (local_2c == (uint *)0x1) {
        local_20 = (uint)local_28;
        local_1c = local_24;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d13168,&DAT_01d13178);
      }
      local_1c = local_24;
      local_20 = (uint)local_28;
      local_28 = &LAB_018a13b8;
      local_2c = &local_20;
      FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_2c);
      return;
    }
    if (uVar4 == 10) break;
    cVar1 = *(char *)((int)&local_2c + uVar4 + ((uint)local_28 & 0xff));
    cVar3 = cVar1;
    if (1 < uVar4) {
      cVar3 = cVar1 + -0x20;
    }
    if (5 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = cVar1;
    }
    local_38[uVar4] = cVar3;
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(10,10,&DAT_01d13188);
}

