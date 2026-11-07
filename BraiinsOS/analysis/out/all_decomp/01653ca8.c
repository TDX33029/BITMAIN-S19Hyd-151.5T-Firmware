// FUN_01653ca8 @ 01653ca8 size=180 calls_out=1 calls_in=1
// strings: 

void FUN_01653ca8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,uint param_7,uint param_8,int param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 + param_7;
  uVar1 = param_4 + param_8 + (uint)CARRY4(param_3,param_7);
  if ((int)param_8 < 0 == (int)((param_4 ^ uVar1) & ~(param_4 ^ param_8)) < 0) {
    puVar2 = (undefined1 *)(param_9 + param_5);
    if (puVar2 < &DAT_3b9aca00) {
      *param_1 = uVar4;
      param_1[1] = uVar1;
      param_1[2] = (uint)puVar2;
      return;
    }
    uVar3 = uVar1 + (0xfffffffe < uVar4);
    if (-1 < (int)((uVar1 ^ uVar3) & ~uVar1)) {
      *param_1 = uVar4 + 1;
      param_1[1] = uVar3;
      param_1[2] = (uint)(puVar2 + -1000000000);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
}

