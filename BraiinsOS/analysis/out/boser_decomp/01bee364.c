// FUN_01bee364 @ 01bee364 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_01bee364(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  software_interrupt(0);
  if (param_3 != 0) {
    return;
  }
  FUN_01bee394(param_4,param_2 & 0xfffffff0,param_5,param_6);
  do {
    software_interrupt(0);
  } while( true );
}

