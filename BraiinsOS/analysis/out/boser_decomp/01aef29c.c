// FUN_01aef29c @ 01aef29c size=392 calls_out=2 calls_in=1
// strings: internal error: entered unreachable code

void FUN_01aef29c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 in_stack_00000018;
  
  if (param_4 == 0 && (0x7b1 < param_3) <= param_4) {
    *param_1 = 0x80000001;
    return;
  }
  uVar4 = param_3 - 1;
  uVar3 = param_4 - (param_3 == 0);
  uVar1 = (uint)((ulonglong)uVar4 * 0x16d);
  uVar2 = uVar4 >> 2 | uVar3 * 0x40000000;
  uVar5 = uVar2 + uVar1;
  uVar6 = FUN_01bf0ff0(uVar4,uVar3,100,0);
  lVar7 = FUN_01bf0ff0(uVar4,uVar3,400,0);
  lVar7 = lVar7 + CONCAT44(((uVar3 >> 2) + uVar3 * 0x16d + (int)((ulonglong)uVar4 * 0x16d >> 0x20) +
                           (uint)CARRY4(uVar2,uVar1)) -
                           ((int)((ulonglong)uVar6 >> 0x20) + (uint)(uVar5 < (uint)uVar6)),
                           uVar5 - (uint)uVar6);
  uVar1 = (uint)lVar7;
  if ((param_3 & 3) == 0) {
    FUN_01bf0ff0(param_3,param_4,400,0,(int)((ulonglong)lVar7 >> 0x20) - (uint)(uVar1 < 0xaf93a));
  }
  if ((uint)(param_5 - 1U < 0xc) <= -(param_6 - (uint)(param_5 == 0))) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30528,uVar1 - 0xaf93a);
  }
                    /* WARNING: Could not recover jumptable at 0x01aef3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01aef3f8 + *(int *)(&DAT_01aef3f8 + (param_5 - 1U) * 4)))
            (in_stack_00000018,param_7);
  return;
}

