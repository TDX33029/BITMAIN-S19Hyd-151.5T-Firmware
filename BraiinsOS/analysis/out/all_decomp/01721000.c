// FUN_01721000 @ 01721000 size=720 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01721000(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  uint local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  bVar3 = param_3 == 0x11;
  if (param_3 < 0x12) {
    bVar3 = *(uint *)(param_4 + 0x18) == param_3;
  }
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  if ((param_3 & 0x3fffffff) == 0) {
    puVar2 = local_60;
  }
  else {
    puVar2 = *(uint **)(param_4 + 0x14);
    if (((local_60 < puVar2) && (puVar2 < local_60 + param_3)) ||
       ((puVar2 < local_60 && (local_60 < puVar2 + param_3)))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1721108);
      (*pcVar1)();
    }
    puVar2 = (uint *)FUN_016dd1aa(local_60);
  }
  if ((((((local_60[0] < 2) && (1 < param_3)) &&
        (bVar3 = local_60[1] == 0, local_60[1] = local_60[1] + -1, bVar3)) &&
       ((param_3 != 2 && (bVar3 = local_60[2] == 0, local_60[2] = local_60[2] + -1, bVar3)))) &&
      ((((param_3 != 3 &&
         ((bVar3 = local_60[3] == 0, local_60[3] = local_60[3] + -1, bVar3 && (param_3 != 4)))) &&
        ((bVar3 = local_50 == 0, local_50 = local_50 + -1, bVar3 &&
         (((((param_3 != 5 && (bVar3 = local_4c == 0, local_4c = local_4c + -1, bVar3)) &&
            (param_3 != 6)) &&
           ((bVar3 = local_48 == 0, local_48 = local_48 + -1, bVar3 && (param_3 != 7)))) &&
          (bVar3 = local_44 == 0, local_44 = local_44 + -1, bVar3)))))) &&
       (((((param_3 != 8 && (bVar3 = local_40 == 0, local_40 = local_40 + -1, bVar3)) &&
          ((param_3 != 9 &&
           (((bVar3 = local_3c == 0, local_3c = local_3c + -1, bVar3 && (param_3 != 10)) &&
            (bVar3 = local_38 == 0, local_38 = local_38 + -1, bVar3)))))) &&
         ((param_3 != 0xb && (bVar3 = local_34 == 0, local_34 = local_34 + -1, bVar3)))) &&
        (param_3 != 0xc)))))) &&
     ((((bVar3 = local_30 == 0, local_30 = local_30 + -1, bVar3 && (param_3 != 0xd)) &&
       ((bVar3 = local_2c == 0, local_2c = local_2c + -1, bVar3 &&
        (((param_3 != 0xe && (bVar3 = local_28 == 0, local_28 = local_28 + -1, bVar3)) &&
         (param_3 != 0xf)))))) &&
      ((bVar3 = local_24 == 0, local_24 = local_24 + -1, bVar3 && (param_3 == 0x11)))))) {
    local_20 = local_20 + -1;
  }
  local_60[0] = local_60[0] - 2;
  FUN_01720f58(param_1,param_2,param_3,puVar2,param_3,param_4);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

