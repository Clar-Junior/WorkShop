import React from 'react';
import { Text, View } from 'react-native';

const HelloWorldApp = () => {
  return (
    <View
      style={{
        backgroundColor: '#131016',
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center',
      }}>
      <Text key={1} style={{
        fontSize: 28,
        color: '#6b6b6b',
        
      }}>Hello, world!</Text>
    </View>
  );
};
export default HelloWorldApp;