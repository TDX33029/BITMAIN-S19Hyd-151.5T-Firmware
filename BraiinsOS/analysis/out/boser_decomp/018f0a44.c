// FUN_018f0a44 @ 018f0a44 size=456 calls_out=7 calls_in=1
// strings: internal error: entered unreachable code

void FUN_018f0a44(short *param_1,int *param_2,short param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_2e0 [224];
  undefined1 auStack_200 [224];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined1 auStack_104 [223];
  undefined1 uStack_25;
  
  if (*param_2 == 0) {
LAB_018f0bd8:
    *param_1 = 0xe;
  }
  else {
    if (*param_2 == 1) {
      if (param_3 == 3) {
        puVar2 = (undefined4 *)&UNK_01d23c38;
      }
      else {
        if (param_3 != 5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d23c48,param_2[3]);
        }
        puVar2 = &DAT_01d23c40;
      }
      FUN_019269f4(&local_120,4,param_2[2],param_2[3],1,0);
      FUN_019269f4(&local_114,0x30,*puVar2,puVar2[1],local_11c,local_118);
      FUN_01890ee8(&local_108,param_4,local_110,local_10c,&uStack_25,&LAB_018bd0b8);
      if (local_108 == 0) {
        FUN_0134bd64(local_114,local_110);
        FUN_0134bd64(local_120,local_11c);
        goto LAB_018f0bd8;
      }
      puVar1 = auStack_2e0;
      FUN_01bed4e2(puVar1,auStack_104,0xdc);
      FUN_0134bd64(local_114,local_110);
      FUN_0134bd64(local_120,local_11c);
    }
    else {
      FUN_01890ee8(&local_108,param_4,param_2[2],param_2[3],&uStack_25,&LAB_018bd0b8);
      if (local_108 == 0) goto LAB_018f0bd8;
      puVar1 = auStack_104;
    }
    FUN_01bed4e2(auStack_200,puVar1,0xdc);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0xe8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xe8);
    }
    *puVar2 = 1;
    puVar2[1] = 1;
    puVar2[2] = local_108;
    FUN_01bed4e2(puVar2 + 3,auStack_200,0xdc);
    *(undefined4 **)(param_1 + 2) = puVar2;
    *param_1 = param_3;
  }
  return;
}

