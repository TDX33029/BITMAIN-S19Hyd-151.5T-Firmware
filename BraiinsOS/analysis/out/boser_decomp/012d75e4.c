// FUN_012d75e4 @ 012d75e4 size=112 calls_out=3 calls_in=1
// strings: File not initializedevent open/utils-rs/continuous-pcap/src/file_output.rs:156

undefined8 FUN_012d75e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 8);
  FUN_012d864c(&local_18,
               "File not initializedevent open/utils-rs/continuous-pcap/src/file_output.rs:156",0x14
              );
  if (iVar2 == -0x80000000) {
    if ((local_18 & 0xff) != 4) {
      local_14 = FUN_012ecc28(&local_18);
      uVar1 = 1;
      goto LAB_012d7648;
    }
  }
  else {
    FUN_0069263c(local_18 & 0xff,local_14);
    local_14 = param_1;
  }
  uVar1 = 0;
LAB_012d7648:
  return CONCAT44(local_14,uVar1);
}

