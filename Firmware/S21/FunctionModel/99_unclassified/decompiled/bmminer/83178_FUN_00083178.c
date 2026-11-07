// FUN_00083178 @ 00083178  size=160  callers=3
// program: bmminer


void FUN_00083178(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 local_1c;
  
  if (param_2 == 1) {
    FUN_000835dc(0,param_1,0,0x18,&local_1c);
  }
  else {
    FUN_000835dc(1,param_1,param_3,0x18,&local_1c);
  }
  if (param_4 == 0) {
    bVar1 = local_1c._3_1_ & 0xf0;
    bVar2 = local_1c._2_1_ & 0xf0;
  }
  else {
    bVar1 = local_1c._3_1_ | 0xf;
    bVar2 = local_1c._2_1_ | 0xf;
  }
  local_1c = CONCAT13(bVar1,CONCAT12(bVar2,(undefined2)local_1c));
  FUN_00081200(param_1,param_2,param_3,0x18,local_1c);
  return;
}

