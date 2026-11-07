// FUN_015e5738 @ 015e5738 size=288 calls_out=6 calls_in=1
// strings: Check for add_ | my answer is suppressed by incoming msg

void FUN_015e5738(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcStack_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined4 local_64;
  undefined *local_60;
  
  if (4 < DAT_01d51b00) {
    local_64 = 0x13;
    local_60 = &DAT_01cfd3f8;
    local_68 = "m";
    pcStack_70 = "m";
    uStack_6c = 0x13;
    FUN_015fb650("Check for add_",0x29,5,&pcStack_70);
  }
  iVar1 = FUN_015e24e4(param_3,param_2);
  if (iVar1 == 0) {
    FUN_01bed4e2(&pcStack_70,param_3,0x58);
    FUN_015e5874(param_1,&pcStack_70);
    return;
  }
  if (4 < DAT_01d51b00) {
    local_64 = 0x13;
    local_60 = &DAT_01cfd408;
    local_68 = "m";
    pcStack_70 = "m";
    uStack_6c = 0x13;
    FUN_015fb650("my answer is suppressed by incoming msg",0x4f,5,&pcStack_70);
  }
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar2);
  FUN_015dddf4();
  FUN_0134bd64(*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44));
  return;
}

