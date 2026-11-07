// FUN_0004a434 @ 0004a434  size=112  callers=1
// program: bmminer


void FUN_0004a434(void)

{
  uint local_c;
  
  local_c = 0;
  FUN_00045bc4(0xd,&local_c);
  FUN_00045c40(0xd,~(~(local_c >> 0x10) << 0x10));
  sleep(3);
  FUN_00045bc4(0xd,&local_c);
  FUN_00045c40(0xd,local_c & 0xffff0000);
  sleep(1);
  FUN_00049d70();
  return;
}

