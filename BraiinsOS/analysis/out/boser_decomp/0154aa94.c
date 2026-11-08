// FUN_0154aa94 @ 0154aa94 size=264 calls_out=6 calls_in=1
// strings: unevaluatedProperties

void FUN_0154aa94(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_178 [38];
  int local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined1 auStack_c8 [144];
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*param_4 != '\x01') || (uVar1 = 0, param_4[1] == '\0')) {
    FUN_0154abd4(&local_d0,param_2);
    if (local_38 == -0x80000000) {
      puVar2 = (undefined *)FUN_01594a60((undefined4)local_d0);
      iVar3 = 0;
    }
    else {
      FUN_01bed4e2((uint)local_178 | 4,(uint)&local_d0 | 4,0x94);
      local_dc = local_34;
      uStack_d8 = uStack_30;
      uStack_d4 = uStack_2c;
      local_e0 = local_38;
      local_178[0] = (undefined4)local_d0;
      uVar4 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                           "unevaluatedProperties",0x15);
      FUN_01bed4e2(auStack_c8,local_178,0xa8);
      local_d0 = uVar4;
      iVar3 = thunk_FUN_01be5118(0xb0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0xb0);
      }
      FUN_01bed4e2(iVar3,&local_d0,0xb0);
      puVar2 = &DAT_01cfb8a4;
    }
    uVar1 = 1;
    param_1[1] = iVar3;
    param_1[2] = puVar2;
  }
  *param_1 = uVar1;
  return;
}

